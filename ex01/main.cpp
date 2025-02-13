/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:11:20 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/14 16:03:11 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

static int CheckInputIsNum(std::string input)
{
	int i;

	for (i = 0; i < input.size(); i++)
	{
		if (!std::isdigit(input[i]))
			return (0);
	}
	return (1);
}

void create_contact(PhoneBook *Book, int index){
	Contact *newContact = new Contact();
	std::string input;
	
	std::cout << "Please enter contact first name :" << std::endl;
	std::cin >> input;
	if (input.size() >= 1){
		newContact->setFirstName(input);
		std::cout << "Please enter contact last name :" << std::endl;
		std::cin >> input;
		if (input.size() >= 1){
			newContact->setLastName(input);
			std::cout << "Please enter contact nick name :" << std::endl;
			std::cin >> input;
			if (input.size() >= 1){
				newContact->setNickName(input);
				std::cout << "Please enter contact phone number :" << std::endl;
				std::cin >> input;
				if (input.size() >= 1 && CheckInputIsNum(input)){
					newContact->setPhoneNumber(input);
					std::cout << "Please enter contact darkest secret :"  << std::endl;
					std::cin >> input;
					if (input.size() >= 1){
						newContact->setDarkestSecret(input);
						std::cout << "Contact successfully registered." << std::endl;
						Book->addContact(newContact);
						Book->display();
					}
				}
			}
		}
		// else {
			
		// 	std::cout << "Error: bad entry";
		// 	newContact.~Contact();
		// }
	}
}

int main(void)
{
	PhoneBook Book = PhoneBook();
	
	std::string command;
	std::string test;
	int 		index;
	
	std::cout << "Welcome to phonebook !" << std::endl << "Please enter a command:" << std::endl;
	std::cin >> command;
	while (command != "EXIT" && 1)
	{
		if (command == "ADD")
			create_contact(&Book, Book.get_nbContacts());
		else if (command == "SEARCH")
		{
			Book.display();
			if (Book.get_nbContacts() == 0)
				std::cout << "Error: no contact are registered." << std::endl;
			else {
				std::cout << "please enter an index :" << std::endl;
				std::cin >> test;
				if (!CheckInputIsNum(test))
					std::cout << "Error: wrong input. Please enter a number." << std::endl;
				else {
					Book.searchContact(std::stoi(test));
				}
			}
		}
		else
			std::cout << "Bad entry, please retry" << std::endl;
		std::cout << "Please enter a command:"<< std::endl;
		std::cin >> command;
	}
	Book.display();
}