/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchRepertoire.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:43:08 by phwang            #+#    #+#             */
/*   Updated: 2025/02/15 13:07:29 by phwang           ###   ########.fr       */
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
	// cout << " _________________________________________________________ " << endl;
	// cout << "|  |          |          |          |          |          |" << endl;
	// cout << "|N.|FirstName | LastName | NickName |  Phone   |  Secret  |" << endl;
	// cout << "|__|__________|__________|__________|__________|__________|" << endl;
	// cout << "|" << index << " |" << contact.getInfo(FIRST) << "|"
	// 	<< contact.getInfo(LAST) << "|" << contact.getInfo(NICKNAME) << "|"
	// 	<< contact.getInfo(PHONE) << "|" << contact.getInfo(SECRET) << "|" << endl;
	// cout << "|__|__________|__________|__________|__________|__________|" << endl;
	
	cout << "Contact Index : " << index << endl;
	cout << "Firstname : " << contact.getInfo(FIRST) << endl;
	cout << "LastName : " << contact.getInfo(LAST) << endl;
	cout << "Nickname : " << contact.getInfo(NICKNAME) << endl;
	cout << "Phone : " << contact.getInfo(PHONE) << endl;
	cout << "Darkest Secret : " << contact.getInfo(SECRET) << endl;

}

static void getIndex(std::string *user_in)
{
	while (1) {		
		cout << "Enter an index you want to see : ";
		getUserInput(user_in);
		if ((*user_in).empty()) {
			cout << "\033[1;31mCannot be empty\033[0m" << endl;
		}
		else { /* check si c bien que des digits et bon chiffre */
			bool is_digit = true;
			for(size_t i = 0; (*user_in)[i]; i++) 
			{
				if(!isdigit((*user_in)[i])) {
					cout << "\033[1;31mPlease enter only digits\033[0m" << endl;
					is_digit = false ;
					break;
				}
			}
			if (is_digit) {
				int index = atoi((*user_in).c_str()); 
				/* (*user_in).c_str() = transforme la string en const char * */ 
				if (index > 7 || index < 0 || (*user_in).size() > 2) {
					cout << "\033[1;31mPlease enter an index between 0 and 7\033[0m" << endl;
				}
				else { break; }
			}
		}
	}
}

void searchContact(PhoneBook phonebook) 
{
	if(!displayRepertoire(phonebook))
		return ;
		
	std::string user_in;
	getIndex(&user_in);
	for(int i = 0; i < 8; i++)
	{
		if(i == atoi(user_in.c_str())){
			return(displayContact(phonebook.getContact(i), i));
		}
	}
	cout << "\033[1;31mCannot find the contact\033[0m" << endl;
}
