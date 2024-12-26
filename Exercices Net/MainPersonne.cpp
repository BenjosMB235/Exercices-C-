#include<iostream>
#include<string>
#include"Personne.h"

using namespace std;

int main(){
	Etudiant e("Mbairam", "Benjamin", 25, "RF01112");
	Fonctionnaire F("Guy", "Demel", 45, 2575.25);
	Personne p("Lambda", "Roger", 15);
	
	e.affiche();
	F.affiche();
	p.affiche();
	
	return 0;
}
