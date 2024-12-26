#include<iostream>
#include"article.h"
#include<string>
#include<iomanip>
using namespace std;
 
int main(){
	article prod1;
	article prod2(2, "tomate", 2500.75, 5);
	article produits[5]={
					article(2, "bic", 15.75, 5), 
					article(5, "crayon", 125.25, 6), 
					article(4, "regle", 125.5, 4),
					article(7, "cahier", 250.5, 8),
					article(8, "stylo", 25.5, 10)
				};
				
	cout<<"Tableau Recapitulatif des differents articles :"<<endl;
	cout<<" "<<endl;
	
	cout<<setw(10)<<"+";
	cout<<setw(16)<<setfill('-')<<"+";
	cout<<setw(16)<<setfill('-')<<"+";
	cout<<setw(16)<<setfill('-')<<"+";
	cout<<setw(16)<<setfill('-')<<"+"<<endl;
	cout<<setw(10)<<setfill(' ')<<"|";
	cout<<setw(12)<<setfill(' ')<<"Reference";
	cout<<setw(4)<<"|";
	cout<<setw(13)<<setfill(' ')<<"Nom Article";
	cout<<setw(3)<<"|";
	cout<<setw(14)<<setfill(' ')<<"Prix Unitaire";
	cout<<setw(2)<<"|";
	cout<<setw(12)<<setfill(' ')<<"Quantite";
	cout<<setw(4)<<"|"<<endl;
	cout<<setw(10)<<"+";
	cout<<setw(16)<<setfill('-')<<"+";
	cout<<setw(16)<<setfill('-')<<"+";
	cout<<setw(16)<<setfill('-')<<"+";
	cout<<setw(16)<<setfill('-')<<"+"<<endl;
	for(int i; i<5; i++){
		cout<<setw(10)<<setfill(' ')<<"|";
		cout<<setw(12)<<setfill(' ')<<produits[i].getRef();
		cout<<setw(4)<<"|";
		cout<<setw(13)<<setfill(' ')<<produits[i].getName();
		cout<<setw(3)<<"|";
		cout<<setw(14)<<setfill(' ')<<produits[i].getPrix();
		cout<<setw(2)<<"|";
		cout<<setw(12)<<setfill(' ')<<produits[i].getQtite();
		cout<<setw(4)<<"|"<<endl;
		cout<<setw(10)<<"+";
		cout<<setw(16)<<setfill('-')<<"+";
		cout<<setw(16)<<setfill('-')<<"+";
		cout<<setw(16)<<setfill('-')<<"+";
		cout<<setw(16)<<setfill('-')<<"+"<<endl;
	}
	cout<<" "<<endl;
	
	cout<<"Le prix tout taxe comprise de tous les articles du tableau est : "<<produits[0].prixTTC()+produits[1].prixTTC()+produits[2].prixTTC()+produits[3].prixTTC()+produits[4].prixTTC()+produits[5].prixTTC();
/*	cout<<"La quantite de votre deuxieme produit est :"<<prod2.getQtite()<<endl;
	
	prod2.vendre(3);
	cout<<"____Apres vente____"<<endl;
	cout<<"La quantite de votre deuxieme produit est :"<<prod2.getQtite()<<endl;
	prod2.approvisionner(12);
	cout<<"____Apres vente____"<<endl;
	cout<<"La quantite de votre deuxieme produit est :"<<prod2.getQtite()<<endl;
	cout<<"____Utilisation des éléments de notre tableau d'objets____"<<endl;
	cout<<"La quantite de votre deuxieme produit dans le tableau est :"<<produits[1].getQtite()<<endl;
	*/
	
	
	return 0;
}

