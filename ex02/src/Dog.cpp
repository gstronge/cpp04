/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:44:59 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/20 20:44:59 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"

Dog::Dog() : Animal()
{
	type = "dog";
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& other_obj) : Animal()
{
	this->type = other_obj.getType();
	std::cout << "Dog copy constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructed\n";
}

Dog&	Dog::operator=(const Dog& other_obj)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &other_obj)
		this->type = other_obj.getType();
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "woof!\n";
}
