/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:53:31 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/22 12:03:51 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "<3<3<3 Valid bureaucrat <3<3<3" << std::endl << std::endl;
	try
	{
		Bureaucrat b1("Victor Newman", 1);
		std::cout << b1 << " ⭐⭐⭐⭐⭐" << std::endl;
        b1.decrementGrade(25);
        std::cout << "----Decrement: "<< std::endl;
        std::cout << b1 << std::endl;

        b1.incrementGrade(12);
        std::cout << "----Increment: "<< std::endl;
        std::cout << b1 << std::endl;

        b1.incrementGrade(120);
        std::cout << "----Increment: "<< std::endl;
        std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << " " << std::endl;
    
	std::cout << "<3<3<3 Invalid bureaucrat <3<3<3" << std::endl << std::endl;
	try
	{
		Bureaucrat b2("Jack Abbott", 189);
		std::cout << b2 << " 📝📉" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << " " << std::endl;
    std::cout << "<3<3<3 GetName/GetGrade <3<3<3" << std::endl << std::endl;
	try
	{
		Bureaucrat b3("La Sardine", 18);
		std::cout << b3 << " 📝📉" << std::endl;
        std::cout << "name: " << b3.getName() << " :)" << std::endl;
        std::cout << "grade: " << b3.getGrade() << " :)" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}