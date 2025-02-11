/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:05:29 by phwang            #+#    #+#             */
/*   Updated: 2025/02/11 15:33:41 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// on va definir ce que font les constructeurs de contact

// cree le contact et il sait que c le contact de hpp car ya contact::
Contact::Contact() : _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("")
{}
// donc la on a cree un constructeur qui a set directement a vide
// si on mets dans les accolades ca va dabord creer puis set a vide

//donc la cest la 2e methode pour ecrire un constructeur, il cree a vide, puis initialise aux bonnes variables
Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
    _firstName = firstName;
    _lastName = lastName;
    _nickName = nickName;
    _phoneNumber = phoneNumber;
    _darkestSecret = darkestSecret;
}

// ceci est le destructeur de contact, il est vide car c++ appelle deja les destructeurs pour chaque objet
// dedans donc le destructeur de std::string 
Contact::~Contact() {}

// donc la on defini la fonction getfirstname quon a mis dans contact::
// elle return la valeur de firstname
std::string const Contact::getFirstName() const { return _firstName; }
