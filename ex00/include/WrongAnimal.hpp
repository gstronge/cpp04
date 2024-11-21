/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:36:50 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/21 09:37:43 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	WRONGANIMAL_HPP
# define	WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other_obj);
	virtual ~WrongAnimal();

	WrongAnimal&	operator=(const WrongAnimal& other_obj);
	void			makeSound() const;
	std::string		getType() const;
};

#endif

