/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:19 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/14 11:19:47 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->nbContacts = 0;
	this->oldestContact = 0;
};

PhoneBook::~PhoneBook(){
	std::cout << "PhoneBook has been destroyed." << std::endl;
}

void	PhoneBook::set_oldestContact(int index){
	this->oldestContact = index; 
}

void	PhoneBook::set_nbContact(){
	this->nbContacts++;
}

int PhoneBook::get_nbContacts(){
	return (this->nbContacts);
}

int PhoneBook::get_oldestContact(){
	return (this->oldestContact);
}

Contact** PhoneBook::get_contactList(){
	return (this->contactlist);
}

static void	display_column(const std::string content){
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
			std::cout << content[i];
		std::cout << ".";
	}
}

void PhoneBook::display(){
	int	i;

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|   Index  |";
	std::cout << "First Name|";
	std::cout << "Last  Name|";
	std::cout << "Nick  Name|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	if (this->nbContacts == 0)
	{
		std::cout << "|         " << 0 << "|";
		display_column("none");
		std::cout << "|";
		display_column("none");
		std::cout << "|";
		display_column("none");
		std::cout << "|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	else
	{
		for (i = 0; i < this->nbContacts; i++){
			std::cout << "|         " << i << "|";
			display_column(this->contactlist[i]->getFirstName());
			std::cout << "|";
			display_column(this->contactlist[i]->getLastName());
			std::cout << "|";
			display_column(this->contactlist[i]->getNickName());
			std::cout << "|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
		}
	}
}

void PhoneBook::destruct(){
	int i = 0;

	for (i = 0; i < this->nbContacts; i++)
		delete this->contactlist[i];
}

void PhoneBook::addContact(Contact *newContact){

	int index = this->get_oldestContact(); 

	std::cout << index;
	
	if (this->nbContacts == 8)
	{
		delete this->contactlist[index];
		this->contactlist[index] = newContact;
	}
	else
	{
		this->contactlist[nbContacts] = newContact;
		this->set_nbContact();
	}
	
}

void PhoneBook::searchContact(int index){
	if (index <= this->nbContacts)
	{
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "|" << index << "|";
		display_column(this->contactlist[index]->getFirstName());
		std::cout << "|";
		display_column(this->contactlist[index]->getLastName());
		std::cout << "|";
		display_column(this->contactlist[index]->getNickName());
		std::cout << "|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	else
		std::cout << "Error : wrong index (" << index << "): must be between 0 and" << this->nbContacts << ".";
}