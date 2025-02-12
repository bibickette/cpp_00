/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addTheContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:20:45 by phwang            #+#    #+#             */
/*   Updated: 2025/02/12 18:05:02 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

using std::cout;
using std::endl;
using std::cin;

static std::string getName(int flag) 
{
	std::string name;
	
	while(1) 
	{
		if (flag == FIRST) { cout << "Please enter a first name : "; }
		else if (flag == LAST) { cout << "Please enter a last name : "; }
		else if (flag == NICKNAME) { cout << "Please enter a nick name : "; }
		getUserInput(&name);
		if (name.empty()) { cout << "\033[1;31mCannot be empty\033[0m" << endl; }
		else 
		{
			for (size_t i = 0; name[i]; i++) {
				if (!isalpha(name[i])) {
					if (flag == FIRST) { cout << "\033[1;31mPlease enter a first name with only letters\033[0m" << endl; }
					else if (flag == LAST) { cout << "\033[1;31mPlease enter a last name with only letters\033[0m" << endl; }
					else if (flag == NICKNAME) { cout << "\033[1;31mPlease enter a nick name with only letters\033[0m" << endl; }
					break;
				}
				if(name.size() - 1 == i) { return(name); }
			}
		}
	}
	return(name);
}

static std::string getPhoneNumber() 
{
	std::string phone;
	
	while(1) {
		cout << "Please enter a phone number : ";
		getUserInput(&phone);
		if (phone.empty()) { cout << "\033[1;31mCannot be empty\033[0m" << endl; }
		else 
		{
			for (size_t i = 0; phone[i]; i++){
				if(!isdigit(phone[i])) { 
					cout << "\033[1;31mPlease enter a phone number with only digits\033[0m" << endl; 
					break;
				}
				if(phone.size() - 1 == i) { return(phone); }
			}
		}
	}
	return(phone);
}

static std::string getDarkestSecret() 
{
	std::string secret;
	
	while(1) 
	{
		cout << "Please enter your darkest secret : ";
		getUserInput(&secret);
		if(secret.empty()) { cout << "\033[1;31mCannot be empty\033[0m" << endl; }
		else {
			for(size_t i = 0; secret[i]; i++) {
				if(!isspace(secret[i])) { return(secret); }
			}
			cout << "\033[1;31mCannot be only whitespace\033[0m" << endl;
		}
	}
	return (secret);
}

std::string cuttedInfo(std::string to_cut)
{
	std::string cutted;
	cutted = to_cut.substr(0, to_cut.size());
	if (to_cut.size() > 10) {
		cutted.resize(10);
		cutted[9] = '.';
	}
	if (to_cut.size() < 10) {
		cutted.resize(10, ' ');
	}
	return(cutted);
}

void addTheContact(PhoneBook *phonebook) 
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phone;
	std::string secret;

	firstname = getName(FIRST);
	lastname = getName(LAST);
	nickname = getName(NICKNAME);
	phone = getPhoneNumber();
	secret = getDarkestSecret();
	Contact new_contact(secret, phone, nickname, lastname, firstname);
	phonebook->addContact(new_contact);
	phonebook->addCuttedContact(Contact(cuttedInfo(secret), cuttedInfo(phone), cuttedInfo(nickname), cuttedInfo(lastname), cuttedInfo(firstname)));
	cout << "\033[1;32mContact successfully added !\033[0m" << endl;
}
