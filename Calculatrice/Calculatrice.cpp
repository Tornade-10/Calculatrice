// Calculatrice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Calculateur.h"

int main()
{
	/*selection des variables */
	int a;
	int b;
	char operation;

	/*affichagge des variables et choix de leur values*/
	std::cout << "selectionner deux nombres a puis b\n";
	std::cin >> a;
	std::cin >> b;

	/*choix de l'operation*/
	std::cout << "operation?" << "\n";
	std::cin >> operation;
	/*choix de l'operation en fonction du joueur*/
	if (operation == '+')
	{
		std::cout << "somme :\t" << add(a, b) << "\n";
	}
	else if (operation == '-')
	{
		std::cout << "difference :\t" << substract(a, b) << "\n";
	}
	else if (operation == '*')
	{
		std::cout << "produit :\t" << multiply(a, b) << "\n";
	}
	else if (operation == '/')
	{
		std::cout << "quotient :\t" << divide(a, b) << "\n";
	}
}