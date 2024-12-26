#include<iostream>
#include<string>
#include "etudiant.h"

using namespace std;

int main(){
	etudiant etud1(4, "Alice", 2);
	etudiant etud2(3, "Boob", 2);
	
	etud1.saisie();
	etud2.saisie();
	
	etud1.affichage();
	etud2.affichage();
	
	cout<<"Moyenne etudiant 1 :"<<etud1.moyenne()<<endl;
	cout<<"Moyenne etudiant 2 :"<<etud2.moyenne()<<endl;
	
	if (etud1.compare(etud2))
		cout<<"Les étudiant ont mm moyenne"<<endl;
	
	if (etud1.admis())
		cout<<"Etudiant 1 admis"<<endl;

	return 0;
}
