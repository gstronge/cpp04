/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:35:40 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/20 20:35:40 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal& other_obj) : type(other_obj.type)
{
	std::cout << "Animal copy constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

Animal&	Animal::operator=(const Animal& other_obj)
{
	std::cout << "Animal copy assignment operator called\n";
	if (this != &other_obj)
		this->type = other_obj.getType();
	return (*this);
}

void Animal::makeSound() const {}

std::string Animal::getType() const
{
	return (type);
}
