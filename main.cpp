#include <iostream>

int main()
{
	float val1,val2,resultat;
	char operateur;

	std::cout << "Saisir calcul : ";
	std::cin >> val1 >> operateur >> val2;

	if (operateur == '+')
	{

		resultat=val1 + val2;

		std::cout << "Somme : "<< resultat << std::endl;
	}
	else if(operateur == '-'){
		resultat=val1 - val2;
		std::cout << "Soustraction : "<< resultat << std::endl;
	}
	else if(operateur == '*'){
		resultat=val1 * val2;
		std::cout << "Multiplication : "<< resultat << std::endl;
	}
		else if(operateur == '/'){
		resultat=val1 / val2;
		std::cout << "Division : "<< resultat << std::endl;
	}
		else {std::cout << "Erreur" << std::endl;
		system("PAUSE");
		return -1;}


	system("PAUSE");

	return 0;
}
