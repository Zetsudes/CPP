
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    this->loadDatabase("data.csv");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& source)
{
    *this = source;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& source)
{
    if (this != &source)
    {
        this->_database = source._database;
    }
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadDatabase(const std::string &dbPath)
{
    std::ifstream file(dbPath.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file (╥﹏╥)" << std::endl;
        return;
    }

    std::string line;
    if (!std::getline(file, line)) // saut ligne d'entete
        return;

    while (std::getline(file, line))
    {
        if(line.empty())
            continue;

        size_t commaPos = line.find(',');
        if (commaPos == std::string::npos)
            continue;

        std::string date = line.substr(0, commaPos);
        std::string rateStr = line.substr(commaPos + 1);

        std::stringstream ss(rateStr);
        float rate;
        if (ss >> rate)
            this->_database[date] = rate;
    }
    file.close();
}

bool BitcoinExchange::isValidDate(const std::string& date) const
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-') // check longueur + separateurs
        return false;

    int year, month, day; // extraction yyyymmdd
    std::stringstream ssYear(date.substr(0, 4));
    std::stringstream ssMonth(date.substr(5, 2));
    std::stringstream ssDay(date.substr(8, 2));

    if (!(ssYear >> year) || !(ssMonth >> month) || !(ssDay >> day))
        return false;
    
    if (month < 1 || month > 12 || year < 2000 || day < 1)
        return false;

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 2) // annees bissextiles
    {
        bool isLeap = (year % 4 == 0 && year % 100 != 0);
        if (isLeap)
            daysInMonth[1] = 29;
    }

    if (day > daysInMonth[month - 1])
        return false;
    
    return true;
}

bool BitcoinExchange::isValidValue(const std::string& valueStr, float& value) const
{
    std::stringstream ss(valueStr);

    if (!(ss >> value) || !ss.eof())
    {
        std::cerr << "Error: bad input (╥﹏╥) => " << valueStr << std::endl;
        return false;
    }

    if (value < 0)
    {
        std::cerr << "Error: not a positive number (╥﹏╥)" << std::endl;
        return false;
    }

    if (value > 1000)
    {
        std::cerr << "Error: too large a number (╥﹏╥)" << std::endl;
        return false;
    }

    return true;
}

void BitcoinExchange::processInput(const std::string& inputPath) const 
{
    std::ifstream file(inputPath.c_str());

    if (!file.is_open()) {
        std::cerr << "Error: could not open file (╥﹏╥)" << std::endl;
        return;
    }

    std::string line;

    
    if (std::getline(file, line)) 
    {
        if (line != "date | value") // si 1ere ligne n'est pas l'entete
        {
            file.clear();
            file.seekg(0, std::ios::beg);
        }
    }

   
    while (std::getline(file, line)) // lecture ligne par ligne du fichier
    {
        if (line.empty())
            continue;

        size_t pipePos = line.find('|'); // separation |
        if (pipePos == std::string::npos) 
        {
            std::cerr << "Error: bad input (╥﹏╥) => " << line << std::endl;
            continue;
        }

        std::string dateStr = line.substr(0, pipePos);
        std::string valueStr = line.substr(pipePos + 1);

        if (!dateStr.empty() && dateStr[dateStr.length() - 1] == ' ') // enleve les espaces
            dateStr = dateStr.substr(0, dateStr.length() - 1);
        
        if (!valueStr.empty() && valueStr[0] == ' ')
            valueStr = valueStr.substr(1);

        if (!isValidDate(dateStr)) 
        {
            std::cerr << "Error: bad input (╥﹏╥) => " << line << std::endl;
            continue;
        }

        float value;
        if (!isValidValue(valueStr, value)) 
        {
            continue;
        }

        // recherche taux de change avec lower_bound
        std::map<std::string, float>::const_iterator it = this->_database.lower_bound(dateStr);

        float rate = 0.0f;

        if (it != this->_database.end() && it->first == dateStr) 
        {
            rate = it->second;
        }
        else if (it == this->_database.begin()) // evite de faire crasher le programme
        {
            std::cerr << "Error: date too early (╥﹏╥) => " << dateStr << std::endl;
            continue;
        }
        else 
        {
            --it;
            rate = it->second;
        }

        std::cout << dateStr << " => " << value << " = " << (value * rate) << std::endl;
    }

    file.close();
}
