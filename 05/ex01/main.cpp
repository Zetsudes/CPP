/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:32:11 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/27 10:34:15 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
    std::cout << "<3<3<3 Valid bureaucrat <3<3<3" << std::endl << std::endl;
	try
	{
		Bureaucrat b1("Victor McBernick", 1);
		std::cout << b1 << " ⭐⭐⭐⭐⭐" << std::endl;

		Form f1("Le karting", 8, 12);
		b1.signForm(f1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << " " << std::endl;
	
    std::cout << "<3<3<3 Invalid bureaucrat <3<3<3" << std::endl << std::endl;
	try
	{
		Bureaucrat b3("Machicoulis", 18);
		
		Form f2("La salade", 10, 22);
		b3.signForm(f2);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    
	return (0);
}