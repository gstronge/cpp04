/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:01:40 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/11 11:01:40 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	DOG_HPP
# define	DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& other_obj);
	~Dog();

	Dog&	operator=(const Dog& other_obj);
	void	makeSound() const;
};

# endif
