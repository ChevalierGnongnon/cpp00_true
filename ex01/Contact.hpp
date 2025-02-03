/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:14 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/03 20:00:41 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
	private :
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public :
		//Getters
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();

		//Setters
		void setFirstName(const std::string &firstName);
		void setLastName(const std::string &lastName);
		void setNickName(const std::string &nickName);
		void setPhoneNumber(const std::string &phoneNumber);
		void setDarkestSecret(const std::string &darkestSecret);
		 
		Contact((const std::string firstName, const std::string lastName, \
				const std::string nickName, const std::string phoneNumber, const std::string darkestSecret));
		~Contact();

};

#endif