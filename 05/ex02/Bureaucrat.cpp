/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:53:37 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/27 10:44:57 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade)
    : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat constructor called for " << _name << " 👷⚙️ 🔧 🔩" << std::endl;     
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
    : _name(src._name), _grade(src._grade)
{
    std::cout << "Bureaucrat copy constructor called for " << _name << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other)
{
    std::cout << "Copy assignment operator called for " << _name << std::endl;

    if (this != &other)
    {
        _grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called for " << _name << " 🏛️ ➡️ 💥" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what () const throw () {
    return "Grade too high (╥﹏╥)💥 💥 💣"; }

const char* Bureaucrat::GradeTooLowException::what () const throw () {
    return "Grade too low (╥﹏╥)📉 ⬇️"; }

std::string Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade()  const { return _grade; }

void Bureaucrat::incrementGrade(int amount)
{
    if (amount >= _grade)
        throw GradeTooHighException();
    _grade -= amount;
}

void Bureaucrat::decrementGrade(int amount)
{
    if (_grade + amount > 150)
        throw GradeTooLowException();
    _grade += amount;
}

void Bureaucrat::signForm(Form& f)
{
    try
    {
        f.beSigned(*this);
        if (f.isSigned())
            std::cout << f.getName() << " signed form ✍️ ✅" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << f.getName() << " couldn't sign form because " << (*this).getName() << " is dumb ╮ (. ❛ ᴗ ❛.) ╭" << std::endl;
    }
}
std::ostream& operator<<(std::ostream &out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}