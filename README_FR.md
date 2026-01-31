🇬🇧 English version available [here](README.md)
* * *
# Présentation du projet `cpp_00`
## Description

Ce projet est une introduction au **C++**.  
Pour cette raison, le processus d’apprentissage commence progressivement.

Dans cette première série d’exercices, nous découvrons la syntaxe de base du C++, notamment les espaces de noms, les classes, les fonctions membres, ainsi que plusieurs concepts fondamentaux de la programmation orientée objet.

* * *
## Langages & Technologies

**Langage**
- C++ (standard C++98)

**Technologies**
- Makefile


* * *
## Aperçu des exercices

### **ex00 – Megaphone**

Créer un programme qui prend des arguments en ligne de commande et les affiche dans le terminal en **lettres capitales**.  
Si aucun argument n’est fourni, le programme affiche un message par défaut, également en lettres capitales.

### **ex01 – My Awesome PhoneBook**

Simuler un annuaire téléphonique à l’aide d’une **interface interactive dans le terminal**.

Commandes disponibles :
- `ADD` : ajouter un nouveau contact
- `SEARCH` : afficher un contact
- `EXIT` : effacer la liste des contacts et quitter le programme

Le répertoire peut contenir jusqu’à **8 contacts**.  
Lorsqu’un 9ᵉ contact est ajouté, il remplace le plus ancien, et ainsi de suite.

### **ex02 – The Job Of Your Dreams**

Trois fichiers sont fournis :
- `tests.cpp`
- `Account.hpp`
- `19920104_091532.log`

L’objectif est d’implémenter la classe `Account` en créant le fichier `Account.cpp` avec toutes les **fonctions statiques et membres** nécessaires.

L’implémentation doit reproduire exactement la sortie du fichier `19920104_091532.log` lors de l’exécution du `main` fourni dans `tests.cpp` (les timestamps peuvent différer).

Pour vérifier la sortie du programme, vous pouvez comparer les deux fichiers à l’aide de la commande `diff`.

* * *

## Règles de compilation

Tous les exercices sont compilés avec les flags suivants :
- `-Wall`
- `-Wextra`
- `-Werror`
- `-std=c++98`



* * *
# Utilisation de `cpp_00`

## **Comment utiliser `cpp_00`**

*Note : ce dépôt contient uniquement le module `cpp_00`. Il fait partie du dépôt global [cpp_modules](https://github.com/bibickette/cpp_modules), qui regroupe l’ensemble des modules C++.*
1. Clonez `cpp_00` dans un dossier : `git clone https://github.com/bibickette/cpp_00.git`
2. Déplacez-vous dans le dépôt : `cd cpp_00`
3. Compilez le module : `make`; cela compilera tous les exercices du module
4. Vous pouvez maintenant vous rendre dans chaque dossier d’exercice et lancer les exécutables correspondants

* * *

*Date de validation du projet : 12 mars - 3 avril, 2025*