/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:59:19 by phwang            #+#    #+#             */
/*   Updated: 2025/02/11 15:31:28 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    /* variable privee commence par _ */
    std::string _firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;
public:
    Contact(); // constructeur par defaut
    Contact(std::string firstName, 
            std::string lastName,
            std::string nickName,
            std::string phoneNumber,
            std::string darkestSecret);
    // constructeur egalement
    ~Contact();

    std::string const getFirstName() const ;
    // premier const garantie que le return sera pas modifie
    // le deuxieme est aussi garanti pas modifier, lobjet "pris"
}; 

#endif