#include<iostream>
#include "point2.h"
#include<cmath>
using namespace std;


int main(){
	
	point A(1.5, 2.5);
	cout<<"Les coordonn�es de votre point sont :"<<A.getAbcisse()<<" et "<<A.getOrdonne()<<endl;
	
	A.deplace(2.5, 2.5);
	
	cout<<"***************************************"<<endl;
	cout<<"Apr�s Translation :"<<endl;
	cout<<"Les coordonn�es de votre point sont :"<<A.getAbcisse()<<" et "<<A.getOrdonne()<<endl;
	
	A.homothetie(10);
	A.theta();
	
	return 0;
}
