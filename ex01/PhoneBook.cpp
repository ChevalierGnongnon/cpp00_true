/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:19 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/10 15:18:28 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){};

PhoneBook::~PhoneBook(){
	std::cout << "PhoneBook has been destroyed.";
}

static void	display_column(const std::string content)
{
	int i = 0;
	
	if (content.size() < 10)
	{
		for (i = 0; i < 10 - content.size(); i++)
			std::cout << " ";
		std::cout << content;
	}
	else
	{
		for(i = 0; i < 9; i++)
			std::cout << content;
		std::cout << ".";
	}
}

void PhoneBook::display(){
	int	i;
	int	j;

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (i = 0; i < this->nbContact; i++){
		std::cout << "|" << i << "|";
		display_column(this->contactlist[i].getFirstName());
		std::cout << "|";
		display_column(this->contactlist[i].getLastName());
		std::cout << "|";
		display_column(this->contactlist[i].getNickName());
		std::cout << "|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
}

void PhoneBook::destruct(){
	int i = 0;

	for (i = 0; i < this->nbContact; i++)
		this->contactlist[i].~Contact();
}

void PhoneBook::addContact(Contact newContact){
	if (this->nbContact == 8)
	{
		this->contactlist[8].~Contact();
		this->contactlist[8] = newContact;
	}
	else
		this->contactlist[nbContact + 1] = newContact;
}

void PhoneBook::searchContact(int index){

	if (index <= this->nbContact)
	{
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "|" << index << "|";
		display_column(this->contactlist[index].getFirstName());
		std::cout << "|";
		display_column(this->contactlist[index].getLastName());
		std::cout << "|";
		display_column(this->contactlist[index].getNickName());
		std::cout << "|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	else
		std::cout << "Error : wrong index (" << index << "): must be between 0 and 7.";
}