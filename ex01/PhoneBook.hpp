/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:23 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/10 15:14:53 by chhoflac         ###   ########.fr       */
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
		void 	addContact(Contact newContact);
		void	searchContact(int index);
		void	destruct();
		void	display();
		~PhoneBook();
};

#endif