#include<iostream>
#include<string>
#include "etudiant.h"

using namespace std;

etudiant::etudiant(){
	mat=0;
	nbrNotes=0;
	nomEtu="";
	tabNotes =NULL;
}
etudiant::etudiant(int mat , string nom, int nbr){
	mat=mat;
	nbrNotes=nbr;
	nomEtu=nom;
	tabNotes=new float[nbrNotes];
} 
etudiant::etudiant(const etudiant &e){
	mat=e.mat;
	nbrNotes=e.nbrNotes;
	nomEtu=e.nomEtu;
	tabNotes=new float[nbrNotes];
	for(int i=0; i<nbrNotes; i++){
		tabNotes[i]=e.tabNotes[i];
	}
}
etudiant::~etudiant(){
	if (tabNotes != NULL){
		delete[] tabNotes;
	}
}
int etudiant::getmat() const{
	return this->mat;
}
string etudiant::getnomEtu() const{
	return this->nomEtu;
}
int etudiant::getnbrNotes() const{
	return this->nbrNotes;
}
void etudiant::setmat(int mat){
	this->mat=mat;
}
void etudiant::setnomEtu(string nom){
	this->nomEtu=nom;
}
void etudiant::setnbrNotes(int nbr){
	this->nbrNotes=nbr;
	if (tabNotes != NULL){
		delete[] tabNotes;
	}
	tabNotes= new float[nbrNotes];
}
void etudiant::saisie(){
	cout<<"Entre les notes"<<endl;
	for(int i=0; i<nbrNotes; i++){
		cout<<"Note "<<i<<": "<<endl;
		cin>>tabNotes[i];
	}
}
void etudiant::affichage() const{
	cout<<"Les informations :"<<endl;
	cout<<"Matricule :"<<this->mat<<endl;
	cout<<"Nom :"<<this->nomEtu<<endl;
	cout<<"Notes :"<<endl;
	for(int i=0; i<nbrNotes; i++)
		cout<<tabNotes[i]<<endl;
}
float etudiant::moyenne() const{
	float soe;
	soe=0;
	for(int i=0; i<nbrNotes; i++)
		soe=soe+tabNotes[i];
	return soe/nbrNotes;
}
bool etudiant::admis() const{
	return moyenne()>=10;
}
bool etudiant::compare(const etudiant &e) const{
	bool r;
	r= moyenne() == e.moyenne();
	return r;
}
