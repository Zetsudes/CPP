/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:50:10 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/27 12:08:28 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm constructor called 🌳" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    checkExecution(executor); 

    std::ofstream file((_target + "_shrubbery").c_str());
    file << "🌳 ASCII trees 🌳" << std::endl;
}