/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 10:49:57 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/17 15:59:37 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm(const std::string target)
    : AForm("PresidentPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentPardonForm constructor called 🇺🇸🦅🏛️" << std::endl;
}

PresidentPardonForm::PresidentPardonForm(const PresidentPardonForm& other)
    : AForm(other), _target(other._target) {}

PresidentPardonForm& PresidentPardonForm::operator=(const PresidentPardonForm& other)
{
    if (this != &other)
        _target = other._target;
    return *this;
}

PresidentPardonForm::~PresidentPardonForm() {}

void PresidentPardonForm::execute(Bureaucrat const & executor) const
{
    checkExecution(executor);

    std::cout << _target << " has been pardoned by Zaphod Beeblebrox 🙏✋" << std::endl;
}