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

int main()
{
	std::cout << "\033[34;1m--Creating blank_animal on the stack--\n\033[0m";
	const Animal blank_animal;

	std::cout << "\n" << "\033[34;1m--Creating Dog on the stack--\n\033[0m";
	const Dog dog_stack;
\
	std::cout << "\n" << "\033[34;1m--Creating Cat on the stack--\n\033[0m";
	const Cat cat_stack;

	std::cout << "\n" << "\033[34;1m--Creating animal pointer and an Animal on the heap--\n\033[0m";
	const Animal* meta = new Animal();

	std::cout << "\n" << "\033[34;1m--Creating animal pointer and an Dog on the heap--\n\033[0m";
	const Animal* j = new Dog();

	std::cout << "\n" << "\033[34;1m--Creating animal pointer and an Cat on the heap--\n\033[0m";
	const Animal* i = new Cat();

	std::cout << "\n" << "\033[34;1m--Printing the type of the Dog--\n\033[0m";
	std::cout << j->getType() << " " << std::endl;

	std::cout << "\n" << "\033[34;1m--Printing the type of the Cat--\n\033[0m";
	std::cout << i->getType() << " " << std::endl;

	std::cout << "\n" << "\033[34;1m--Cat makes a sound--\n\033[0m";
	i->makeSound(); //will output the cat sound!

	std::cout << "\n" << "\033[34;1m--Dog makes a sound--\n\033[0m";
	j->makeSound();

	std::cout << "\n" << "\033[34;1m--Animal makes a sound--\n\033[0m";
	meta->makeSound();

	std::cout << "\n" << "\033[34;1m--Animal deleted--\n\033[0m";
	delete meta;

	std::cout << "\n" << "\033[34;1m--Dog deleted--\n\033[0m";
	delete j;

	std::cout << "\n" << "\033[34;1m--Cat deleted--\n\033[0m";
	delete i;

	std::cout << "\n" << "\033[34;1m--MAIN FINISHED--\n\033[0m";
	return 0;
}