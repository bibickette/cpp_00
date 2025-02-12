/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:22:16 by phwang            #+#    #+#             */
/*   Updated: 2025/02/12 18:44:41 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(Contact contact)
{
    static size_t index = 0;
    if (index == 8)
        index = 0;
    _repertoire[index] = contact;
    if (index < 8)
        index++;
}

void PhoneBook::addCuttedContact(Contact contact)
{
	static size_t index = 0;
    if (index == 8)
        index = 0;
    _cuttedRepertoire[index] = contact;
    if (index < 8)
        index++;
}

Contact const PhoneBook::getCuttedContact(int target) const 
{
	return(_cuttedRepertoire[target]);
}

Contact const PhoneBook::getContact(int target) const 
{
	return(_repertoire[target]);
}

