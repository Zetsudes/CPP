/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:32:11 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/26 14:27:09 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Intern intern;
    AForm* form;

    form = intern.makeForm("Robotomy request", "LOLOLOLO");
    if (form)
    {
        Bureaucrat bob("Bob", 1);
        bob.signForm(*form);
        bob.executeForm(*form);
        delete form;
    }

    form = intern.makeForm("Shrubbery creation", "home");
    if (form)
    {
        Bureaucrat alice("Alice", 1);
        alice.signForm(*form);
        alice.executeForm(*form);
        delete form;
    }

    return 0;
}