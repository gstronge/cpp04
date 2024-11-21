/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:11:48 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/20 21:11:48 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
	int		no_of_animals = 6;
	Animal*	animal_array[no_of_animals];

	for (int i = 0; i < no_of_animals; i++)
	{
		if (i < (no_of_animals / 2))
		{
			std::cout << "\n" << "\033[32;1m--Creating animal pointer and a Dog on the heap--\n\033[0m";
			animal_array[i] = new Dog();
		}
		else
		{
			std::cout << "\n" << "\033[33;1m--Creating animal pointer and an Cat on the heap--\n\033[0m";
			animal_array[i] = new Cat();
		}
	}


	std::cout << "\n" << "\033[30;1m--getting 1st idea of 1st animal--\n\033[0m";
	std::cout << animal_array[0]->getIdea(0) << "\n";
	
	std::cout << "\n" << "\033[30;1m--setting 1st idea of 1st animal to \"new idea\"--\n\033[0m";
	animal_array[0]->setIdea("new idea", 0);

	std::cout << "\033[30;1m--then getting 1st idea of 1st animal--\n\033[0m";
	std::cout << animal_array[0]->getIdea(0) << "\n";

	std::cout << "\n" << "\033[30;1m--then getting 1st idea of last animal--\n\033[0m";
	std::cout << animal_array[5]->getIdea(0) << "\n";

	for (int i = 0; i < no_of_animals; i++)
	{
		std::cout << "\n" << "\033[31;1m--Animal " << i + 1 << " deleted--\n\033[0m";
		delete animal_array[i];
	}

	// std::cout << "\n" << "\033[34;1m--creating an Animal object--\n\033[0m";
	// Animal	an_animal;

	return 0;
}
