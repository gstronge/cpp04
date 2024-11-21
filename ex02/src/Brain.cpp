/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:20:59 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/21 13:40:58 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = "an old idea";
}

Brain::Brain(const Brain& other_obj)
{
	std::cout << "Brain copy constructor called\n";
	for(int i = 0; 1 < 100; i++)
		this->ideas[i] = other_obj.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructed\n";
}

Brain&	Brain::operator=(const Brain& other_obj)
{
	std::cout << "Brain copy assignment operator called\n";
	if (this != &other_obj)
	{
		for(int i = 0; 1 < 100; i++)
			this->ideas[i] = other_obj.ideas[i];
	}
	return (*this);
}
