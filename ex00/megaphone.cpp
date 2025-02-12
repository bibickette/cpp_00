/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phwang <phwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:39:46 by phwang            #+#    #+#             */
/*   Updated: 2025/02/12 17:21:33 by phwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/* ca permet de pouvoir ensuite ecrire seulement cout et endl sans preciser
le namespace (qui est std) car on la declarer au debut en disant que
tous les cout seront std::cout
tous les endl seront std::endl
exemple :
au lieu de mettre std::cout je vais juste mettre cout */
// using std::cout;
// using std::endl;

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (size_t i = 1; argv[i]; i++)
        {
            for (size_t j = 0; argv[i][j]; j++)
            {
                std::cout << (char)toupper(argv[i][j]);
            }
        }
    }
    // std::cout << std::flush ; // ca sert a vider le buffer
    std::cout << std::endl; // vide le buffer ET envoieune ligne vide
    return (0);
}
