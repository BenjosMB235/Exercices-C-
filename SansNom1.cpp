#include<iostream>

using namespace std;

int permutation(int a, int b);
int main(){
	int d, c;
	cin>>d>>c;
	cout<<permutation(d, c)<<endl;
	return 0;
}
int permutation(int a, int b){
	
	int per;
	int &d=a;
	int &c=b;
	int &e=per;
	
	//cin>>a>>b;
	per=d;
	a=c;
	b=e;
	
	cout<<"la premiere valeur ="<<a<<" et la deuxième valeur ="<<b<<endl;
	
	return 0;
	
}
