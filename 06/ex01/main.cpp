/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:10:20 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/27 15:58:46 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"
# include <iostream>

int main() {
    
    Data original(42, "hello", 3.14);
 
    std::cout << "<3<3<3  Original Data object <3<3<3" << std::endl;
    std::cout << "Address : " << &original        << std::endl;
    std::cout << "id      : " << original.id      << std::endl;
    std::cout << "name    : " << original.name    << std::endl;
    std::cout << "value   : " << original.value   << std::endl;
 
    uintptr_t raw = Serializer::serialize(&original);
    std::cout << "\n<3<3<3  Serialized <3<3<3 " << std::endl;
    std::cout << "Raw uintptr_t value: " << raw << std::endl;
 
    Data* recovered = Serializer::deserialize(raw);
    std::cout << "\n<3<3<3  Deserialized Data object <3<3<3 " << std::endl;
    std::cout << "Address : " << recovered        << std::endl;
    std::cout << "id      : " << recovered->id    << std::endl;
    std::cout << "name    : " << recovered->name  << std::endl;
    std::cout << "value   : " << recovered->value << std::endl;
 
    std::cout << "\n<3<3<3 Pointer comparison <3<3<3 " << std::endl;
    if (recovered == &original)
        std::cout << "yaaaaaay ♡⸜(˶˃ ᵕ ˂˶)⸝♡ : deserialize(serialize(ptr)) == ptr" << std::endl;
    else
        std::cout << "oh nooooo (╥﹏╥) : pointers do not match!" << std::endl;
 
    return 0;
}