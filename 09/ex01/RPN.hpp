
#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <cstdlib>
#include <iostream>

class RPN
{
    private:
        std::stack<int> _stack;
        bool isOperator(char c) const;
        void applyOperation(char op);

    public:
        RPN();
        RPN(const RPN& source);
        RPN& operator=(const RPN& source);
        ~RPN();

    void calculate(const std::string& expression);
};

#endif