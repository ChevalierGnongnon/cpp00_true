/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:11:20 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/11 12:38:29 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"



int main(void)
{
	PhoneBook Book = PhoneBook();
	
	std::string input;
	std::cout << "Welcome to phonebook !" << std::endl << "Please enter a command" << std::endl;

	std::cin >> input;
	while (input != "EXIT")
	{
		std::cout << "Please enter a command" << std::endl;
		if (input == "ADD")
			std::cout << "add has been selected" << std::endl;
		else if (input == "SEARCH")
		{
			Book.display();
		}
		else
			std::cout << "Bad entry, please retry" << std::endl;
		std::cin >> input;
	}
}