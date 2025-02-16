/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:19 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/16 17:49:06 by chhoflac         ###   ########.fr       */
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
	if (index < 8)
		this->oldestContact = index;
	else
		this->oldestContact = 0;
}

void	PhoneBook::set_nbContact(){
	if (this->nbContacts < 8)
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
	
	if (content.size() <= 10)
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
	
	if (this->nbContacts == 8)
	{
		delete this->contactlist[index];
		this->contactlist[index] = newContact;
		this->set_oldestContact(index + 1);
	}
	else 
	{
		this->contactlist[nbContacts] = newContact;
		this->set_nbContact();
	}
	
}

void PhoneBook::searchContact(int index){
	if (index == 0 || index <= this->nbContacts - 1)
	{
		std::cout << "Index : " << index << std::endl;
		std::cout << "First name : " << this->contactlist[index]->getFirstName() << std::endl;
		std::cout << "Last name : " << this->contactlist[index]->getLastName() << std::endl;
		std::cout << "Nick name : " << this->contactlist[index]->getNickName() << std::endl;
		std::cout << "Phone number : " << this->contactlist[index]->getPhoneNumber() << std::endl;
		std::cout << "Darkest secret : " << this->contactlist[index]->getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Error : wrong index (" << index << ")." << std::endl;
}