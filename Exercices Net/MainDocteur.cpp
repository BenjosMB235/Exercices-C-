#include<iostream>
#include"Docteur.h"
#include<string>
 using namespace std;
 
 int main(){
 	Docteur doc1, doc2;
 	
 	doc1.affichage();
 	doc2.affichage();
 	cout<<"________Changeons les informations d'un medecin________"<<endl;
 	doc1.saisie();
 	doc1.affichage();
 	
 	doc1.salaire();
 	
 	if (doc1.compare(doc2)) {
    	cout << "Les deux docteurs ont le meme salaire." << endl;
	} else {
    	cout << "Les deux docteurs n'ont pas le meme salaire." << endl;
	}
	return 0;

}
