/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:50:05 by zamohame          #+#    #+#             */
/*   Updated: 2026/03/24 18:32:56 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"
# include "AForm.hpp"
# include <cstdlib>
# include <ctime> 

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm constructor called 🦾" << std::endl;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    checkExecution(executor);

    std::cout << "Some drilling noises ¬‿¬" << std::endl;

    if (rand() % 2);
        std::cout << _target << " has been robotomised 🦿" << std::endl;
    else
        std::cout << "Robotomy failed :(";
    
}