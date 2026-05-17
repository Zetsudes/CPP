/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:32:11 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/17 16:36:23 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Intern intern;
    AForm* form;

    form = intern.makeForm("robotomy request", "Bender");
    if (form)
    {
        Bureaucrat bob("Bob", 1);
        bob.signForm(*form);
        bob.executeForm(*form);
        delete form;
    }

    form = intern.makeForm("shrubbery creation", "home");
    if (form)
    {
        Bureaucrat alice("Alice", 1);
        alice.signForm(*form);
        alice.executeForm(*form);
        delete form;
    }

    form = intern.makeForm("doesnt exist", "nowhere");
    if (form)
        delete form;

    return 0;
}