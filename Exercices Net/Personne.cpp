#include<iostream>
#include<string>
#include"Personne.h"

using namespace std;

Personne::Personne(string n, string p, int a){
	this->nom=n;
	this->prenom=p;
	this->age=a;
}
Personne::Personne(const Personne &p){
	this->nom=p.nom;
	this->prenom=p.prenom;
	this->age=p.age;
}
string Personne::getNom(){
	return this->nom;
}
string Personne::getPrenom(){
	return this->prenom;
}
int Personne::getAge(){
	return this->age;
}
void Personne::setNom(string n){
	this->nom=n;
}
void Personne::setPrenom(string p){
	this->prenom=p;
}
void Personne::setAge(int a){
	this->age=a;
}
void Personne::affiche(){
	cout<<"Les informations de la personne"<<endl;
	cout<<"Nom :"<<this->nom<<endl;
	cout<<"Prenom :"<<this->prenom<<endl;
	cout<<"Age :"<<this->age<<endl;
}
Etudiant::Etudiant(string n, string p, int a, string c): Personne(n, p, a){
	this->CNE=c;
}
Etudiant::Etudiant(const Etudiant &e):Personne(e){
	this->CNE=e.CNE;
}
string Etudiant::getCNE(){
	return this->CNE;
}
void Etudiant::setCNE(string c){
	this->CNE=c;
}
void Etudiant::affiche(){
	Personne::affiche();
	cout<<"CNE :"<<this->CNE<<endl;
}
Fonctionnaire::Fonctionnaire(string n, string p, int a, float se): Personne(n, p, a){
	this->s=se;
}
Fonctionnaire::Fonctionnaire(const Fonctionnaire &f):Personne(f){
	this->s=f.s;
}
float Fonctionnaire::getS(){
	return this->s;
}
void Fonctionnaire::setS(float se){
	this->s=se;
}
void Fonctionnaire::affiche(){
	Personne::affiche();
	cout<<"Salaire :"<<this->s<<endl;
}
