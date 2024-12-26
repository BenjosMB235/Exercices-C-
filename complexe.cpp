#include<iostream>
#include<cmath>
#include"complexe.h"
using namespace std;

Complexe::Complexe(){
	this->re=0;
	this->im=0;
}
Complexe::Complexe(float re, float im){
	this->re=re;
	this->im=im;
}
Complexe::~Complexe(){
	delete this;
}
float Complexe::getre(){
	return this->re;
}
float Complexe::getim(){
	return this->im;
}
void Complexe::setre(float re){
	this->re=re;
}
void Complexe::setim(float im){
	this->im=im;
}
void Complexe::affiche(){
	if ((this->re) == 0 && (this->im) == 0 ){
		cout<<"Z="<<0<<endl;
	}
	if ((this->re) == 0 && (this->im) != 0 ){
		cout<<"Z="<<"i"<<this->im<<endl;
	}
	if ((this->re) != 0 && (this->im) == 0 ){
		cout<<"Z="<<this->re<<endl;
	}
	if ((this->re) != 0 && (this->im) != 0 ){
		cout<<"Z="<<this->re<<"+i"<<this->im<<endl;
	}
}
void affiche2(const Complexe &z){
	if ((z.re) == 0 && (z.im) == 0 ){
		cout<<"Z="<<0<<endl;
	}
	if ((z.re) == 0 && (z.im) != 0 ){
		cout<<"Z="<<"i"<<z.im<<endl;
	}
	if ((z.re) != 0 && (z.im) == 0 ){
		cout<<"Z="<<z.re<<endl;
	}
	if ((z.re) != 0 && (z.im) != 0 ){
		cout<<"Z="<<z.re<<"+i"<<z.im<<endl;
	}
}
float Complexe::module(){
	return sqrt(this->re*this->re+this->im*this->im);
};
float module2(const Complexe &z){
	return sqrt(z.re*z.re+z.im*z.im);
}
Complexe& Complexe::operator=(const Complexe &z){
	this->re=z.re;
	this->im=z.im;
	return *this;
}
Complexe& operator+=(Complexe &z1, const Complexe &z2){
	z1.re+=z2.re;
	z1.im+=z2.im;
	
	return z1;
}
Complexe& operator-=(Complexe &z1, const Complexe &z2){
	z1.re-=z2.re;
	z1.im-=z2.im;
	
	return z1;
}
Complexe& Complexe::operator-(){
	this->re=-this->re;
	this->im=-this->im;
	
	return *this;
}
Complexe& Complexe::operator++(){
	this->re++;
	
	return *this;
}
bool operator==(const Complexe &z1, const Complexe &z2){
	if (z1.re==z2.re && z1.im==z2.im)
		return true;
	else return false;
	
}
ostream& operator<<(ostream& flux, Complexe &z){
	flux<<z.re<<"+"<<z.im<<"i"<<endl;
}
istream& operator>>(istream& flux, Complexe &z){
	flux>>z.re>>z.im;
}
