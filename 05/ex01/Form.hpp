/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:07:05 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/26 14:45:11 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _signGrade;
        const int _execGrade;
    
    public:
        Form();
        Form(const std::string name, const int signGrade, const int execGrade);
        Form(const Form& src);
        Form &operator=(const Form& other);
        ~Form();

        std::string getName() const;
        bool isSigned() const;
        int getSignGrade() const;
        int getExecGrade() const;

        void beSigned(const Bureaucrat& b);
        
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw ();         
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw (); 
                
        };
};

std::ostream& operator<<(std::ostream &out, const Form& f);

#endif