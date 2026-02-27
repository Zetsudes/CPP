/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:06:53 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/27 10:45:25 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"

Form::Form(const std::string name, const int signGrade, const int execGrade)
    : _name(name), _signed(false), _signGrade(signGrade),_execGrade(execGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form constructor called for " << _name << " 👷⚙️ 🔧 🔩" << std::endl;
}

Form::Form(const Form& other)
    : _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade)
{
    std::cout << "Form copy constructor called " << std::endl;
}

Form &Form::operator=(const Form& other)
{
    std::cout << "Form copy assignment operator called" << std::endl;
    if (this != &other)
        _signed = other._signed;
    return *this;
}

Form::~Form()
{
    std::cout << "Form destructor called for " << _name << " 🏛️ ➡️ 💥" << std::endl;
}

const char* Form::GradeTooHighException::what () const throw () {
    return "Grade too high (╥﹏╥)💥 💥 💣"; }

const char* Form::GradeTooLowException::what () const throw () {
    return "Grade too low (╥﹏╥)📉 ⬇️"; }

std::string Form::getName() const { return _name; }
int Form::getSignGrade() const { return _signGrade; }
int Form::getExecGrade() const { return _execGrade; }
bool Form::isSigned() const { return _signed; }

void Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > _signGrade)
        throw GradeTooLowException();
    _signed = true;
}