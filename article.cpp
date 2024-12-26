#include<iostream>
#include<string>
#include"article.h"
 using namespace std;
 
 article::article(){
 	this->ref=0;
 	this->name="";
 	this->prixht=0;
 	this->qtite=0;
 }
 article::article(int r, string n, float pr, int q){
 	this->ref=r;
 	this->name=n;
 	this->prixht=pr;
 	this->qtite=q;
 }
 string article::getName(){
 	return this->name;
 }
 int article::getRef(){
 	return this->ref;
 }
 float article::getPrix(){
 	return this->prixht;
 }
 int article::getQtite(){
 	return this->qtite;
 }
 void article::approvisionner(int q){
 	this->qtite+=q;
 }
 bool article::vendre(int q){
 	if (this->qtite >= q){
 		this->qtite -= q;
 		return true;
	 }
 	else{
 		return false;
	 }
 }
 float article::prixTTC(){
 	float TTC;
 	TTC= prixht * qtite;
 	return TTC;
 }
