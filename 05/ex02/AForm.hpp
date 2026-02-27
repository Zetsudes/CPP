/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 12:07:05 by zamohame          #+#    #+#             */
/*   Updated: 2026/02/27 12:05:40 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _signed;
        const int _signGrade;
        const int _execGrade;

    protected:
        void checkExecution(Bureaucrat const & executor) const;
    
    public:
        AForm();
        AForm(const std::string name, const int signGrade, const int execGrade);
        AForm(const AForm& src);
        AForm &operator=(const AForm& other);
        virtual ~AForm();

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

        virtual execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream &out, const AForm& f);

#endif