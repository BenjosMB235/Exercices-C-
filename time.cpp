#include<iostream>
#include"time.h"
#include<cstdio>
using namespace std;

Time::Time(){
	this->h=0;
	this->mn=0;
	this->s=0;
}
Time::Time(char *heure){
	sscanf(heure, "%d:%d:%d", &this->h, &this->mn, &this->s);
}
Time::Time(int h, int mn, int s){
	this->h=h;
	this->mn=mn;
	this->s=s;
}
Time::Time(const Time &heure){
	this->h=heure.h;
	this->mn=heure.mn;
	this->s=heure.s;
}
int Time::geth(){
	return this->h;
}
int Time::getmn(){
	return this->mn;
}
int Time::gets(){
	return this->s;
}
void Time::seth(int h){
	this->h=h;
}
void Time::setmn(int mn){
	this->mn=mn;
}
void Time::sets(int s){
	this->s=s;
}      
int compare(const Time &h1, const Time &h2){
	
	if (h1.h>h2.h){
		return -1;
	}else if (h2.h>h1.h)
		return 1;
	else{
		if (h1.mn>h2.mn)
			return -1;
		else if (h1.mn<h2.mn)
			return 1;
		else{
			if (h1.s>h2.s)
				return -1;
			else if (h1.s<h2.s)
				return 1;
			else
				return 0;
		}
	}
}
void Time::changeTime(int hs){
	int ts;
	this->s=this->s+hs;
	if ((this->s)>60){
		this->mn=this->mn+((this->s)/60);
		this->s=(this->s)%60;
	}
	if ((this->s)<0){
		ts=(this->mn)*60 + (this->s);
		this->mn=ts/60;
		this->s=ts%60;
	}
} 

ostream& operator<<(ostream& flux, Time &hs){
	flux<<hs.h<<":"<<hs.mn<<":"<<hs.s<<endl;
}
