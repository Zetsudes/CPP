/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:31:15 by zamohame          #+#    #+#             */
/*   Updated: 2025/11/18 11:31:18 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

bool    parseArgs(int argc, char **argv, std::string &filename, std::string &s1, std::string &s2);
bool    parseFile(const std::string &filename);
std::string replaceLine(const std::string &line, const std::string &s1, const std::string &s2);

#endif
