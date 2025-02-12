/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:59:19 by phwang            #+#    #+#             */
/*   Updated: 2025/02/12 17:21:27 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
# define FIRST 0
# define LAST 1
# define NICKNAME 2
# define PHONE 3
# define SECRET 4
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
	Contact(std::string darkestSecret,
		std::string phoneNumber,
		std::string nickName,
		std::string lastName,
    	std::string firstName);
    // constructeur egalement
    ~Contact();

    std::string const getInfo(int flag) const ;
    // premier const garantie que le return sera pas modifie
    // le deuxieme est aussi garanti pas modifier, lobjet "pris"
}; 

#endif