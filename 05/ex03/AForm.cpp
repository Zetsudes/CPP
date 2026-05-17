/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:06:53 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/17 15:37:06 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"
# include "Bureaucrat.hpp"

AForm::AForm(const std::string name, const int signGrade, const int execGrade)
    : _name(name), _signed(false), _signGrade(signGrade),_execGrade(execGrade)
{
    if (signGrade < 1 || execGrade < 1)
        throw AForm::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw AForm::GradeTooLowException();
    std::cout << "AForm constructor called for " << _name << " 👷⚙️ 🔧 🔩" << std::endl;
}

AForm::AForm(const AForm& other)
    : _name(other._name), _signGrade(other._signGrade), _execGrade(other._execGrade)
{
    std::cout << "AForm copy constructor called " << std::endl;
}

AForm &AForm::operator=(const AForm& other)
{
    std::cout << "AForm copy assignment operator called" << std::endl;
    if (this != &other)
        _signed = other._signed;
    return *this;
}

AForm::~AForm()
{
    std::cout << "AForm destructor called for " << _name << " 🏛️ ➡️ 💥" << std::endl;
}

const char* AForm::GradeTooHighException::what () const throw () {
    return "Grade too high (╥﹏╥)💥 💥 💣"; }

const char* AForm::GradeTooLowException::what () const throw () {
    return "Grade too low (╥﹏╥)📉 ⬇️"; }

const char* AForm::FormNotSignedException::what () const throw () {
    return "Form not signed (╥﹏╥)"; }

std::string AForm::getName() const { return _name; }
int AForm::getSignGrade() const { return _signGrade; }
int AForm::getExecGrade() const { return _execGrade; }
bool AForm::isSigned() const { return _signed; }

void AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > _signGrade)
        throw GradeTooLowException();
    _signed = true;
}

void AForm::checkExecution(Bureaucrat const & executor) const
{
    if (!isSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > _execGrade)
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, const AForm& f)
{
    out << "Form: " << f.getName()
        << " | Signed: " << (f.isSigned() ? "yes" : "no")
        << " | Sign grade required: " << f.getSignGrade()
        << " | Exec grade required: " << f.getExecGrade();
    return out;
}