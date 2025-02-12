/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:02:42 by phwang            #+#    #+#             */
/*   Updated: 2025/02/12 18:42:57 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
3 types de boucle :
do {} while (condition) :  c'est une boucle while, mais tu sais que tu dois iterer au moins une fois
while (condition) {} : tu ne sais pas combien de fois tu vas iterer
for (; condition ;) {} : tu sais EXACTEMENT combien de fois tu vas iterer 

pour la culture du cpp13 ou autre
foreach (elem : elems) {} : Pour chaque elem dans elems

*/

#include "PhoneBook.hpp"

using std::cout;
using std::endl;
using std::cin;

void exiting()
{
	cout << "Exiting Phonebook" << endl;
	exit(0);
}

void getUserInput(std::string *user_in)
{
	getline(cin, *user_in);
	if (cin.eof()) { exiting(); }
}

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 1) {
    	cout << "\033[1;31mPhonebook take only 1 argument\033[0m" << endl; }
    else {
		PhoneBook phonebook;
        std::string user_in;
		
        while(1) {
            cout << "Write a command : ADD, SEARCH or EXIT : ";
            getUserInput(&user_in);
			if (user_in == "EXIT") { exiting(); }
			else if(user_in == "ADD") { addTheContact(&phonebook); }
			else if (user_in == "SEARCH") { searchContact(phonebook);}
			else if (!user_in.empty()) { cout << "\033[1;31mInvalid command\033[0m" << endl; }
		}
	}
    return (0);
}
