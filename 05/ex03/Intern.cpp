/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 16:05:43 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/17 16:34:09 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentPardonForm.hpp"

Intern::Intern() {}
Intern::Intern(const Intern& other) { (void)other; }
Intern& Intern::operator=(const Intern& other) { (void)other; return *this; }
Intern::~Intern() {}

static AForm* createShrubbery(const std::string& target) {
    return new ShrubberyCreationForm(target);
}
static AForm* createRobotomy(const std::string& target) {
    return new RobotomyRequestForm(target);
}
static AForm* createPardon(const std::string& target) {
    return new PresidentPardonForm(target);
}

AForm* Intern::makeForm(const std::string& name, const std::string& target) const
{
    struct FormEntry {
        std::string name;
        AForm* (*create)(const std::string&);
    };

    FormEntry forms[] = {
        {"Shrubbery creation",  createShrubbery},
        {"Robotomy request",    createRobotomy},
        {"President pardon", createPardon}
    };

    for (int i = 0; i < 3; i++)
    {
        if (forms[i].name == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i].create(target);
        }
    }
    std::cout << "Error: form '" << name << "' does not exist" << std::endl;
    return NULL;
}