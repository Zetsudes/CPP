/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:53:34 by zamohame          #+#    #+#             */
/*   Updated: 2026/03/24 18:39:04 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;

class Bureaucrat 
{
    private:
        const std::string _name;
        int _grade;
    
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& src);
        Bureaucrat &operator=(const Bureaucrat& other);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;
        void incrementGrade(int amount);
        void decrementGrade(int amount);

        void signForm(Form& f);
        void executeForm(AForm const & form) const;
        

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

std::ostream& operator<<(std::ostream &out, const Bureaucrat& b);

#endif
