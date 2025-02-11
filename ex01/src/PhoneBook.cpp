/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:22:16 by phwang            #+#    #+#             */
/*   Updated: 2025/02/11 15:39:05 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(Contact contact)
{
    // int i = 0;
    // while(i < 8){
    //     if(i == 7 && !_repertoire[i].getFirstName().empty())
    //         i = 0;
    //     if(_repertoire[i].getFirstName().empty())
    //         _repertoire[i] = contact;
    // }
    static size_t index = 0;
    if (index == 8)
        index = 0;
    _repertoire[index] = contact;
    if (index < 8)
        index++;
}
