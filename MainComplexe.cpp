#include<iostream>
#include<cmath>
#include"complexe.h"
using namespace std;

int main(){
	
	cout<<"Utilisation des surcharges des opérateurs"<<endl;
	Complexe z1, z2, z3(1, 8), z4;
	cout<<"Donnez la partie réelle et la partie imaginaire de z1"<<endl;
	cin>>z1;
	cout<<"Donnez la partie réelle et la partie imaginaire de z2"<<endl;
	cin>>z2;
	cout<<"z1="<<z1;
	cout<<"z2="<<z2;
	
	z2+=z1;
	cout<<"z2="<<z2;
	cout<<"z3="<<z3;
	
	z3-=z1;
	cout<<"z3="<<z3;
	z4=z3;
	cout<<"z4="<<z4;
	cout<<"-z4="<<-z4;
	++z3;
	cout<<"z3="<<z3;
	
	//z1==z3;
	
	return 0;
	
	/*float x, y;
	Complexe z1=Complexe();
	Complexe z2(5,3);
	Complexe z4(0,4);
	
	z1.affiche();
	z2.affiche();
	z4.affiche();
	cout<<"Reel (Z4)="<<z4.getre()<<endl<<"Imaginaire(Z4)="<<z4.getim()<<endl;
	cout<<"Entrez une valeur de votre réel :"<<endl;
	cin>>x;
	cout<<"Entrez une valeur de votre imaginaire :"<<endl;
	cin>>y;
	z1.setre(x);
	z1.setim(y);
	affiche2(z1);
	cout<<"|z1|="<<z1.module()<<endl;
	cout<<"|z4|="<<module2(z4)<<endl;
	
	return 0;*/
}
