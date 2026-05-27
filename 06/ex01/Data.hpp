/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:44:00 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/27 15:46:33 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <string>
struct Data 
{
    int id;
    std::string name;
    double value;

    Data(int id, const std::string& name, double value)
        : id(id), name(name), value(value) {}
};
#endif