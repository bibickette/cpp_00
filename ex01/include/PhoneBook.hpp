/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:03:06 by phwang            #+#    #+#             */
/*   Updated: 2025/02/11 15:24:40 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

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
public:
    PhoneBook(/* args */); // constructeur est appele automatiquement
    ~PhoneBook(); // destructeur, c le constructeur avec la vague ~

    void addContact(Contact contact);
};

#endif