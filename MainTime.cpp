#include<iostream>
#include"time.h"
using namespace std;

int main(){
	Time duree(0, 26, 3);
	Time duree2(1, 24, 54);
	Time duree3("10:25:40");
	duree.changeTime(50);
	
	cout<<compare(duree, duree2)<<endl;
	
	cout<<duree<<endl;
	cout<<duree3;
	
	return 0;
}
