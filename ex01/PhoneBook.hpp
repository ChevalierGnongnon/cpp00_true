/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:23 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/10 15:06:38 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <string>
 
class PhoneBook {

	private :
		Contact contactlist[8];
		int 	nbContact;
		int		size;
	public :
		PhoneBook();
		void addcontact(Contact newContact);
		Contact search_contact(int index);
		void destruct();
		void display();
		~PhoneBook();
};

#endif