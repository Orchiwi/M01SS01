#include <iostream>
#include <fstream>
#include <ctime> (time.h)
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
	time_t t = time(0);
	tm* now = localtime(&t);
	FichierLog << now->tm_mday << "/" << (now ->tm_mon + 1) << "/" << (now->tm_year + 1900) << "[" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec <<  "]" << ": " << val1 << " " << operateur << " " << val2 << " = " << resultat << "\n";
	FichierLog.close ();

	system("PAUSE");

	return 0;
}
