#include<iostream>
#include"notionFriend.h"

using namespace std;

point::point(int x, int y){
	this->x=x;
	this->y=y;
}
int point::getx(){
	return this->x;
}
int point::gety(){
	return this->y;
}
void point::setx(int x){
	 this->x=x;
}
void point::sety(int y){
	 this->y=y;
};
void affiche(const point &a){
	cout<<"Les coordonnes :"<<a.x<<" "<<a.y<<endl;
}
