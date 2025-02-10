/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:18:10 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/10 10:28:35 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::getFirstName(){
	return (this->first_name);
}

std::string	Contact::getLastName(){
	return (this->first_name);
}

std::string	Contact::getNickName(){
	return (this->first_name);
}

std::string	Contact::getPhoneNumber(){
	return (this->first_name);
}

std::string	Contact::getDarkestSecret(){
	return (this->first_name);
}

void	Contact::setFirstName(const std::string &firstName){
	this->first_name = firstName;
}

void	Contact::setLastName(const std::string &lastName){
	this->last_name = lastName;
}

void	Contact::setNickName(const std::string &nickName){
	this->nick_name = nickName;
}

void	Contact::setPhoneNumber(const std::string &phoneNumber){
	this->phone_number = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string &darkestSecret){
	this->darkest_secret = darkestSecret;
}

