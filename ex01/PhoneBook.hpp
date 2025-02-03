/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:23 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/03 17:33:43 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <string>
 
class PhoneBook {

	private :
		Contact contactlist[8];
		int		size;
	public :
		void addcontact(Contact contact);
		Contact search_contact(int index);
		void exit();
		PhoneBook();
		void display();
};

#endif