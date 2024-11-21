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

int main()
{
	std::cout << "\033[34;1m--Creating blank_animal on the stack--\n\033[0m";
	const Animal animal_stack;

	std::cout << "\n" << "\033[34;1m--Creating Dog on the stack--\n\033[0m";
	const Dog dog_stack;

	std::cout << "\n" << "\033[34;1m--Creating Cat on the stack--\n\033[0m";
	const Cat cat_stack;

	std::cout << "\n" << "\033[33;1m--Animal (on stack) makes a sound--\n\033[0m";
	animal_stack.makeSound();

	std::cout << "\n" << "\033[33;1m--Dog (on stack) makes a sound--\n\033[0m";
	dog_stack.makeSound();

	std::cout << "\n" << "\033[33;1m--Cat (on stack) makes a sound--\n\033[0m";
	cat_stack.makeSound();

	std::cout << "\n" << "\033[34;1m--Creating animal pointer and an Animal on the heap--\n\033[0m";
	const Animal* meta = new Animal();

	std::cout << "\n" << "\033[34;1m--Creating animal pointer and an Dog on the heap--\n\033[0m";
	const Animal* j = new Dog();

	std::cout << "\n" << "\033[34;1m--Creating animal pointer and an Cat on the heap--\n\033[0m";
	const Animal* i = new Cat();

	std::cout << "\n" << "\033[34;1m--Printing the type of the Dog (on heap)--\n\033[0m";
	std::cout << j->getType() << " " << std::endl;

	std::cout << "\n" << "\033[34;1m--Printing the type of the Cat (on heap)--\n\033[0m";
	std::cout << i->getType() << " " << std::endl;

	std::cout << "\n" << "\033[34;1m--Cat (on heap) makes a sound--\n\033[0m";
	i->makeSound();

	std::cout << "\n" << "\033[34;1m--Dog (on heap) makes a sound--\n\033[0m";
	j->makeSound();

	std::cout << "\n" << "\033[34;1m--Animal (on heap) makes a sound--\n\033[0m";
	meta->makeSound();

	std::cout << "\n" << "\033[34;1m--Animal deleted--\n\033[0m";
	delete meta;

	std::cout << "\n" << "\033[34;1m--Dog deleted--\n\033[0m";
	delete j;

	std::cout << "\n" << "\033[34;1m--Cat deleted--\n\033[0m";
	delete i;

	std::cout  << "\n" << "\033[33;1m--Creating a Wrong Animal on the stack--\n\033[0m";
	const WrongAnimal wrong_animal;

	std::cout << "\n" << "\033[33;1m--Creating a Wrong Cat on the stack--\n\033[0m";
	const WrongCat wrong_cat;

	std::cout << "\n" << "\033[33;1m--Wrong Animal (on stack) makes a sound--\n\033[0m";
	wrong_animal.makeSound();

	std::cout << "\n" << "\033[33;1m--WrongCat (on stack) makes a sound--\n\033[0m";
	wrong_cat.makeSound();

	std::cout << "\n" << "\033[33;1m--Creating WrongAnimal pointer and an WrongAnimal on the heap--\n\033[0m";
	const WrongAnimal* wrong_animal_ptr = new WrongAnimal();

	std::cout << "\n" << "\033[33;1m--Creating WrongAnimal pointer and a WrongCat on the heap--\n\033[0m";
	const WrongAnimal* wrong_cat_ptr = new WrongCat();

	std::cout << "\n" << "\033[33;1m--WrongAnimal ptr makes a sound--\n\033[0m";
	wrong_animal_ptr->makeSound();

	std::cout << "\n" << "\033[33;1m--WrongCat ptr makes a sound--\n\033[0m";
	wrong_cat_ptr->makeSound();

	std::cout << "\n" << "\033[33;1m--WrongAnimal ptr--\n\033[0m";
	delete wrong_animal_ptr;

	std::cout << "\n" << "\033[33;1m--WrongCat ptr deleted--\n\033[0m";
	delete wrong_cat_ptr;

	std::cout << "\n" << "\033[32;1m--MAIN FINISHED--\n\033[0m";
	return 0;
}