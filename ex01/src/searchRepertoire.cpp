/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchRepertoire.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:43:08 by phwang            #+#    #+#             */
/*   Updated: 2025/02/12 18:43:45 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

using std::cout;
using std::endl;
using std::cin;

static bool displayRepertoire(PhoneBook phonebook)
{
	Contact contact;
	cout << " ___________________________________ " << endl;
	cout << "|  |          |          |          |" << endl;
	cout << "|N.|FirstName | LastName | NickName |" << endl;
	cout << "|__|__________|__________|__________|" << endl;
	for(size_t i = 0; i < 8; i++) {
		contact = phonebook.getCuttedContact(i);
		if(i == 0 && contact.getInfo(FIRST).empty()){
			cout << "\033[1;31mPhonebook is empty\033[0m" << endl;
			return (false);
		}
		else if (contact.getInfo(FIRST).empty()) { break; }
		cout << "|" << i << " |" << contact.getInfo(FIRST) << "|"
			<< contact.getInfo(LAST) << "|" << contact.getInfo(NICKNAME) << "|" << endl;
	}
	cout << "|__|__________|__________|__________|" << endl;
	return(true);
}

static void displayContact(Contact contact, int index)
{
	cout << " _________________________________________________________ " << endl;
	cout << "|  |          |          |          |          |          |" << endl;
	cout << "|N.|FirstName | LastName | NickName |  Phone   |  Secret  |" << endl;
	cout << "|__|__________|__________|__________|__________|__________|" << endl;
	cout << "|" << index << " |" << contact.getInfo(FIRST) << "|"
		<< contact.getInfo(LAST) << "|" << contact.getInfo(NICKNAME) << "|"
		<< contact.getInfo(PHONE) << "|" << contact.getInfo(SECRET) << "|" << endl;
	cout << "|__|__________|__________|__________|__________|__________|" << endl;
}

void searchContact(PhoneBook phonebook) 
{
	if(!displayRepertoire(phonebook))
		return ;
	std::string user_in;
	cout << "Enter a contact you want to see : ";
	while (1) {		
		getUserInput(&user_in);
		if(user_in.empty()){
			cout << "\033[1;31mCannot be empty\033[0m" << endl;
		}
		else { break; }
	}
	for(size_t i = 0; i < 8; i++)
	{
		if(phonebook.getContact(i).getInfo(FIRST) == user_in){
			return(displayContact(phonebook.getContact(i), i));
		}
	}
	cout << "\033[1;31mCannot find the contact\033[0m" << endl;
}
