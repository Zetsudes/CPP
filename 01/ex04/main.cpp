/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:32:19 by zamohame          #+#    #+#             */
/*   Updated: 2025/11/18 11:32:21 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
    std::string filename, s1, s2;
    std::string line;

    if (!parseArgs(argc, argv, filename, s1, s2))
        return 1;
    if (!parseFile(filename))
        return 1;
    std::ifstream infile(filename.c_str()); // reading
    std::ofstream outfile((filename + ".replace").c_str()); // writing

    while (std::getline(infile, line))
    {
        std::string replacedLine = replaceLine(line, s1, s2);
        outfile << replacedLine << std::endl;  
    }
    return 0;
}
