/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:32:11 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/26 14:19:54 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentPardonForm.hpp"
# include <cstdlib>
# include <ctime>

int main()
{
	srand(time(NULL));

    try
    {
        Bureaucrat boss("Boss", 1);
        Bureaucrat naze("Naze", 150);

        AForm *shrub = new ShrubberyCreationForm("home");
        AForm *robot = new RobotomyRequestForm("rapido");
        AForm *pardon = new PresidentPardonForm("razmo");

        boss.signForm(*shrub);
        boss.executeForm(*shrub);

        boss.signForm(*robot);
        boss.executeForm(*robot);

        boss.signForm(*pardon);
        boss.executeForm(*pardon);

        naze.executeForm(*robot);

        delete shrub;
        delete robot;
        delete pardon;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}