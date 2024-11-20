/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:41:55 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/20 22:41:55 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	CAT_HPP
# define	CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat& other_obj);
	~Cat();

	Cat&	operator=(const Cat& other_obj);
	void	makeSound() const override;
};

# endif