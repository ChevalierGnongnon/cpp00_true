/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:11:20 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/13 13:01:43 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact create_contact(PhoneBook Book, int index){
	Contact newContact = Contact();
	std::string input;
	
	std::cout << "Please enter contact first name :" << std::endl;
	std::cin >> input;
	if (input.size() > 1)
	{
		newContact.setFirstName(input);
		std::cout << "Please enter contact last name :" << std::endl;
		std::cin >> input;
		if (input.size() > 1){
			newContact.setLastName(input);
			std::cout << "Please enter contact nick name :" << std::endl;
			std::cin >> input;
			if (input.size() > 1){
				newContact.setNickName(input);
				std::cout << "Please enter contact phone number :" << std::endl;
				std::cin >> input;
				if (input.size() > 1){
					newContact.setPhoneNumber(input);
					std::cout << "Please enter contact darkest secret :"  << std::endl;
					std::cin >> input;
					if (input.size() > 1){
						newContact.setDarkestSecret(input);
						std::cout << "Contact successfully registered." << std::endl;
						Book.get_contactList()[index] = newContact;
					}
				}
			}
		}
	}
	else
	{
		std::cout << "Error : Bad input" << std::endl;
		newContact.~Contact();
	}
}

int main(void)
{
	PhoneBook Book = PhoneBook();
	
	std::string command;
	
	std::cout << "Welcome to phonebook !" << std::endl << "Please enter a command" << std::endl;
	std::cin >> command;
	while (command != "EXIT")
	{
		std::cout << "Please enter a command" << std::endl;
		if (command == "ADD")
		{
			
			
		}
		else if (command == "SEARCH")
		{
			Book.display();
			if (Book.get_nbContacts() == 0)
				std::cout << "Error: no contact are registered.";
				
		}
		else
			std::cout << "Bad entry, please retry" << std::endl;
		std::cin >> command;
	}
}