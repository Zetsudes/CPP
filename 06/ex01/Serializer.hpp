/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:29:07 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/27 15:56:53 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#pragma once

# include <iostream>
# include <string>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer & other);
        Serializer& operator=(const Serializer& other);
        ~Serializer();

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        
};

#endif