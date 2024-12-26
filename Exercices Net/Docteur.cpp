#include<iostream>
#include"Docteur.h"

using namespace std;

Docteur::Docteur(){
	mat=0;
	nom="";
	speci="";
	exp=0;
	nbrPat=0;
}
Docteur::Docteur(int m, string n, string sp, int ex, int nbr){
	mat=m;
	nom=n;
	speci=sp;
	exp=ex;
	nbrPat=nbr;
}
Docteur::Docteur(const Docteur &d){
	mat=d.mat;
	nom=d.nom;
	speci=d.speci;
	exp=d.exp;
	nbrPat=d.nbrPat;
}
Docteur::~Docteur(){
	delete this;
}
int Docteur::getmat(){
	return mat;
}
string Docteur::getnom(){
	return nom;
}
string Docteur::getspeci(){
	return speci;
}
int Docteur::getexp(){
	return exp;
}
int Docteur::getnbrPat(){
	return nbrPat;
}
void Docteur::setmat(int m){
	mat=m;
}
void Docteur::setnom(string n){
	nom=n;
}
void Docteur::setspeci(string spe){
	speci=spe;
}
void Docteur::setexp(int ex){
	exp=ex;
}
void Docteur::setnbrPat(int nbr){
	nbrPat=nbr;
}
void Docteur::saisie(){
	cout<<"Saisies les informations du Docteur :"<<endl;
	cout<<"Matricule : ";
	cin>>mat;
	cout<<"Nom : ";
	cin>>nom;
	cout<<"Spécialité : ";
	cin>>speci;
	cout<<"Expérience : ";
	cin>>exp;
	cout<<"Nombre de patients : ";
	cin>>nbrPat;
}
void Docteur::affichage(){
	cout<<"Les informations du Docteur :"<<endl;
	cout<<"Matricule : "<<mat<<endl;
	cout<<"Nom : "<<nom<<endl;
	cout<<"Spécialité : "<<speci<<endl;
	cout<<"Expérience : "<<exp<<endl;
	cout<<"Nombre de patients : "<<nbrPat<<endl;
	cout<<"Salaire :"<<salaire()<<endl;
}
double Docteur::salaire() const{
	double s;
	s=2500.0;
	s+=exp*100.0;
	s+=speci=="cardiologie"?500.0:0.0;
	s+=speci=="chirurgie"?500.0:0.0;
	s+=speci=="radiographie"?500.0:0.0;
	return s;
}
bool Docteur::compare(const Docteur &d){
	bool compare;
	compare = this->salaire() == d.salaire();
	return compare;
}
