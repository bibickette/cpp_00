/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:03:06 by phwang            #+#    #+#             */
/*   Updated: 2025/02/12 18:43:53 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <cstdlib>

# define FIRST 0
# define LAST 1
# define NICKNAME 2
# define PHONE 3
# define SECRET 4
# define RED \033[1;31m
# define RESET \033[0m

/* une classe aura toujours un constructeur et un destructeur
la classe peut etre privee ou public mais le destructeur sera tj public*/
/* un fichier par class */
// les constructeurs sont aussi des voids
class PhoneBook
{
private:
    /* fonction, variable, structure etc
    ca sera innaccessible sauf si on cree un objet qui fait parti de la class
    un objet est une variable qui stock tout en elle */
    Contact _repertoire[8]; // un tableau de 8 contacts
	Contact _cuttedRepertoire[8];
public:
    PhoneBook(/* args */); // constructeur est appele automatiquement
    ~PhoneBook(); // destructeur, c le constructeur avec la vague ~

    void addContact(Contact contact);
	void addCuttedContact(Contact contact);
	Contact const getContact(int i) const ;
	Contact const getCuttedContact(int i) const ;
};

void getUserInput(std::string *user_in);
void addTheContact(PhoneBook *phonebook);
void searchContact(PhoneBook phonebook);

#endif