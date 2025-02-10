/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:19 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/10 13:33:29 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){};

PhoneBook::~PhoneBook(){
	std::cout << "PhoneBook has been destroyed.";
}


void PhoneBook::display()
{
	int	i;
	int	j;

	std::cout << "|----------|----------|----------|----------|";
	for (i = 0; i < 8; i++){
		std::cout << i + "|";
		if (this->contactlist[i].getFirstName().size() < 10)
			std::cout << this->contactlist[i].getFirstName();
		else
		{
			for(j = 0; j < 9; j++)
				std::cout << this->contactlist[i].getFirstName()[j];
			std::cout << ".";
		}
		std::cout << "|";
		if (this->contactlist[i].getLastName().size() < 10)
			std::cout << this->contactlist[i].getLastName();
		else
		{
			for(j = 0; j < 9; j++)
				std::cout << this->contactlist[i].getLastName()[j];
			std::cout << ".";
		}
		std::cout << "|";
		if (this->contactlist[i].getNickName().size() < 10)
			std::cout << this->contactlist[i].getNickName();
		else
		{
			for(j = 0; j < 9; j++)
				std::cout << this->contactlist[i].getNickName()[j];
			std::cout << ".";
		}
	}
	std::cout << "|----------|----------|----------|----------|";
	
}