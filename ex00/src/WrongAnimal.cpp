/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:38:04 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/21 09:38:22 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other_obj) : type(other_obj.type)
{
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other_obj)
{
	std::cout << "WrongAnimal copy assignment operator called\n";
	if (this != &other_obj)
		this->type = other_obj.getType();
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal noises\n";
}

std::string WrongAnimal::getType() const
{
	return (type);
}

