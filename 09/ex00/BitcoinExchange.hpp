

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

class BitcoinExchange
{
    private:
        std::map<std::string, float> _database;
        void loadDatabase(const std::string& dbPath);

        bool isValidDate(const std::string &date) const;
        bool isValidValue(const std::string &valueStr, float &value) const;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& source);
        BitcoinExchange& operator=(const BitcoinExchange& source);
        ~BitcoinExchange();

        void processInput(const std::string& inputPath) const;
};

#endif