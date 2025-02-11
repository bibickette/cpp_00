/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:02:42 by phwang            #+#    #+#             */
/*   Updated: 2025/02/11 15:49:37 by phwang           ###   ########.fr       */
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
            getline(cin, tamere); // est lequivalent de getnextline et va stocker dans tamere
            if(cin.eof())
            {
                cout << endl 
                     << "ctrl d fin du prog" << endl;
                return(0);
            }
            cout << tamere;
        } while(tamere.empty()); // tant que je resepcte le while, je fais le do, tant que je suis remplie
    }
    return (0);
}
