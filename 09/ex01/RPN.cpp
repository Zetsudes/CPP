
#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& source)
{
    *this = source;
}

RPN& RPN::operator=(const RPN& source)
{
    if (this != &source)
        this->_stack = source._stack;
    return (*this);
}

RPN::~RPN() {}

bool RPN::isOperator(char c) const
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

void RPN::applyOperation(char op)
{
    if (_stack.size() < 2)
    {
        throw std::runtime_error("Error");
    }
    
        int b = _stack.top();
        _stack.pop();
        int a = _stack.top();
        _stack.pop();

        if (op == '+')
            _stack.push(a + b);
        else if (op == '-')
            _stack.push(a - b);
        else if (op == '*')
            _stack.push(a * b);
        else if (op == '/')
        {
             if (b == 0)
                throw std::runtime_error("Error");
            _stack.push(a / b);  
        }
}

void RPN::calculate(const std::string& expression) 
{
    while (!_stack.empty()) // reinitialise la stack
        _stack.pop();

    std::stringstream ss(expression);
    std::string token;

    while (ss >> token) 
    {
        if (token.length() == 1 && std::isdigit(token[0])) 
            _stack.push(token[0] - '0');
        else if (token.length() == 1 && isOperator(token[0])) 
            applyOperation(token[0]);
        else
            throw std::runtime_error("Error");
    }

    if (_stack.size() != 1)
        throw std::runtime_error("Error");

    std::cout << _stack.top() << std::endl;
}