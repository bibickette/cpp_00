/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:02:42 by phwang            #+#    #+#             */
/*   Updated: 2025/02/11 16:05:39 by phwang           ###   ########.fr       */
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

std::string getUserInput() {
    std::string str;
    getline(cin, str);
    if (cin.eof())
    {
        return("");
    }
    if(str.empty())
    {
        return("");
    }
    return(str);
}

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 1)
    {
        cout << "Phonebook take only 1 argument" << endl;
    }
    else {
        std::string tamere;
        do
        {
            cout << "Write a command : ADD, SEARCH or EXIT : ";
            tamere = getUserInput();
            cout << tamere;
        } while(tamere.empty()); // tant que je resepcte le while, je fais le do, tant que je suis remplie
    }
    return (0);
}
