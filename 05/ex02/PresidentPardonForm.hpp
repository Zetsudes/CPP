/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:50:02 by zamohame          #+#    #+#             */
/*   Updated: 2026/03/24 18:32:14 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTPARDONFORM_HPP
# define PRESIDENTPARDONFORM_HPP

#include "AForm.hpp"

class PresidentPardonForm : public Form
{
    private:
        const std::string _target;

    public:
        PresidentPardonForm(const std::string target);
        PresidentPardonForm(const PresidentPardonForm& other);
        PresidentPardonForm& operator=(const PresidentPardonForm& other);
        ~PresidentPardonForm();

        void execute(Bureaucrat const & executor);
};

#endif