/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:23 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/11 14:13:38 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <string>
 
class PhoneBook {

	private :
		Contact contactlist[8];
		int		oldestContact;
		int 	nbContacts;
	public :
		//Getters
		int get_nbContacts();
		int get_oldestContact();

		//Setters
		void	set_oldestContact(int index);
		void	set_nbContact(int value);
		
		//Constructeur(s) / Destructeur(s)
		PhoneBook();
		~PhoneBook();
		
		//Methodes
		void 	addContact(Contact newContact);
		void	searchContact(int index);
		void	destruct();
		void	display();
		
};

#endif