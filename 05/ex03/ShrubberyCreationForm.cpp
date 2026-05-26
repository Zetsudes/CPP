/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:50:10 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/26 14:21:20 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "AForm.hpp"
# include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm constructor called 🌳" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
        _target = other._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    checkExecution(executor); 

    std::ofstream file((_target + "_shrubbery").c_str());
    file << "           ccee88oo\n"
        "        C8O8O8Q8PoOb o8oo\n"
        "      dOB69QO8PdUOpugoO9bD\n"
        "     CgggbU8OU qOp qOdoUOdcb\n"
        "         6OuU  /p u gcoUodpP\n"
        "           \\\\\\//  /douUP\n"
        "             \\\\\\////\n"
        "              |||/\\\\\n"
        "              |||\\/\n"
        "              |||||\n"
        "        .....//||||\\\\....\n";
}
