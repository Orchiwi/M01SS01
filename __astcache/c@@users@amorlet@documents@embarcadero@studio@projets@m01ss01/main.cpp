﻿#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	float val1,val2,resultat;
	char operateur;

	cout << "Saisir calcul : ";
	cin >> val1 >> operateur >> val2;

	if (operateur == '+')
	{

		resultat=val1 + val2;

		cout << "Somme : "<< resultat << endl;
	}
	else if(operateur == '-'){
		resultat=val1 - val2;
		cout << "Soustraction : "<< resultat << endl;
	}
	else if(operateur == '*'){
		resultat=val1 * val2;
		cout << "Multiplication : "<< resultat << endl;
	}
		else if(operateur == '/'){
		resultat=val1 / val2;
		cout << "Division : "<< resultat << endl;
	}
		else {cout << "Erreur" << endl;
		system("PAUSE");
		return -1;
	}

	cout << "FIN DU PROGRAMME CALCULATRICE SANS ERREUR" << endl;

	ofstream FichierLog;
	FichierLog.open("journal log", ios_base::app);
	FichierLog << val1 << operateur << val2 << ":" << resultat << "\n";
	FichierLog.close ();

	system("PAUSE");

	return 0;
}
