/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:51:39 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/11 10:51:39 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	ANIMAL_HPP
# define	ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal& other_obj);
	virtual ~Animal();

	Animal&			operator=(const Animal& other_obj);
	void virtual	makeSound() const;
	std::string		getType() const;
};

#endif
