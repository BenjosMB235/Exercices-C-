#include<iostream>

using namespace std;
int permutation(int &x, int &y);
int main(){
	int a, b;
	cout<<"Entre deux entiers :"<<endl;
	cin>>a>>b;
	cout<<"Avant permutation :"<<a<<" et "<<b<<endl;
	permutation(a, b);
	cout<<"Apres permutation :"<<a<<" et "<<b<<endl;
	
	return 0;
}
int permutation(int &x, int &y){
	int z;
	z=x;
	x=y;
	y=z;
}
