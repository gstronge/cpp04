/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstronge <gstronge@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 10:15:09 by gstronge          #+#    #+#             */
/*   Updated: 2024/11/21 13:40:52 by gstronge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	BRAIN_HPP
# define	BRAIN_HPP

#include <iostream>

class Brain
{
public:
	std::string	ideas[100];

	Brain();
	Brain(const Brain& other_obj);
	~Brain();

	Brain&				operator=(const Brain& other_obj);
};

#endif