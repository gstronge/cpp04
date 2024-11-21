/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:43:22 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/20 22:43:22 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat& other_obj) : Animal()
{
	this->type = other_obj.getType();
	std::cout << "Cat copy constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructed\n";
}

Cat&	Cat::operator=(const Cat& other_obj)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this != &other_obj)
		this->type = other_obj.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meow!\n";
}
