#include<iostream>
using namespace std;
int main(){
	char op;
	
	double num, num2;
	cout<<"Entre un numero :"<<endl;
	cin>>num;
	cout<<"Entre un op�rateur +,-,*,/ :"<<endl;
	cin>>op;
	cout<<"Entre un autre numero :"<<endl;
	cin>>num2;
	
	switch(op){
		case '+':
			cout <<"R�sultat = "<<(num+num2);
		break;
		case '-':
			cout <<"R�sultat = "<<(num-num2);
		break;
		case '*':
			cout <<"R�sultat = "<<(num*num2);
		break;
		case '/':
			cout <<"R�sultat = "<<(num/num2);
		break;
		default:
			cout <<"Op�rateur inconnu"<<endl;
	}
	return 0;
}
