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

#include "../include/Brain.hpp"
#include <iostream>

class Animal
{
protected:
	std::string	type;
	Brain*		animal_brain;

public:
	Animal();
	Animal(const Animal& other_obj);
	virtual ~Animal();

	Animal&				operator=(const Animal& other_obj);
	void virtual		makeSound() const = 0;
	std::string			getType() const;
	const std::string&	getIdea(const int idea_no);
	void				setIdea(const std::string& new_idea, const int idea_no);

};

#endif
