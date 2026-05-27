/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:10:20 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/27 18:19:07 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Functions.hpp"
#include "ABC.hpp"

int main() 
{
    srand(time(NULL));

    std::cout << "<3<3<3 Test pointer <3<3<3" << std::endl;
    for (int i = 0; i < 9; i++) {
        Base* obj = generate();
        std::cout << "identify(ptr): ";
        identify(obj);
        delete obj;
    }

    std::cout << "\n<3<3<3 Test reference <3<3<3" << std::endl;
    for (int i = 0; i < 9; i++) {
        Base* obj = generate();
        std::cout << "identify(ref): ";
        identify(*obj);
        delete obj;
    }

    std::cout << "\n<3<3<3 Test known types <3<3<3" << std::endl;
    A a; B b; C c;
    std::cout << "A ptr: "; identify(&a);
    std::cout << "B ptr: "; identify(&b);
    std::cout << "C ptr: "; identify(&c);
    std::cout << "A ref: "; identify(a);
    std::cout << "B ref: "; identify(b);
    std::cout << "C ref: "; identify(c);

    return 0;
}