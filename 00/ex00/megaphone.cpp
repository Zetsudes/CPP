/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:54:03 by zamohame          #+#    #+#             */
/*   Updated: 2025/08/14 12:54:06 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}

	for (int i = 1; i < argc; ++i)
	{
		std::string arg = argv[i]; // converts argv[i] to a c++ string

		for (size_t j = 0; j < arg.length(); ++j)
			arg[j] = std::toupper(arg[j]);

		std::cout << arg;
	}
	std::cout << "\n";
}
