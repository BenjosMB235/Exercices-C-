#include<iostream>
using namespace std;
int main(){
	char op;
	
	double num, num2;
	cout<<"Entre un numero :"<<endl;
	cin>>num;
	cout<<"Entre un opérateur +,-,*,/ :"<<endl;
	cin>>op;
	cout<<"Entre un autre numero :"<<endl;
	cin>>num2;
	
	switch(op){
		case '+':
			cout <<"Résultat = "<<(num+num2);
		break;
		case '-':
			cout <<"Résultat = "<<(num-num2);
		break;
		case '*':
			cout <<"Résultat = "<<(num*num2);
		break;
		case '/':
			cout <<"Résultat = "<<(num/num2);
		break;
		default:
			cout <<"Opérateur inconnu"<<endl;
	}
	return 0;
}
