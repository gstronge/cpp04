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
	animal_brain = new Brain();
}

Animal::Animal(const Animal& other_obj) : type(other_obj.type)
{
	std::cout << "Animal copy constructor called\n";
}

Animal::~Animal()
{
	delete animal_brain;
	std::cout << "Animal destructed\n";
}

Animal&	Animal::operator=(const Animal& other_obj)
{
	std::cout << "Animal copy assignment operator called\n";
	if (this != &other_obj)
		this->type = other_obj.getType();
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal noises\n";
}

std::string Animal::getType() const
{
	return (type);
}

const std::string&	Animal::getIdea(const int idea_no)
{
	static const std::string	error_message = "idea_no not in range of 0-99";

	if (idea_no >= 0 && idea_no < 100)
		return (animal_brain->ideas[idea_no]);
	return(error_message);
}

void	Animal::setIdea(const std::string& new_idea, const int idea_no)
{
	if (idea_no >= 0 && idea_no < 100)
		animal_brain->ideas[idea_no] = new_idea;
}
