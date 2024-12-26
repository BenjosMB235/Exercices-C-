#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int pr;
	int nbr;
	int i;
	char c;
	cout<<"Quelle est votre choix (H ou O): "<<endl;
	cin>>c;
	cout<<"Entre le premier chiffre :"<<endl;
	cin>>pr;
	cout<<"Entre le nombre de tes chiffres :"<<endl;
	cin>>nbr;
	cout<<"+";
	cout<<setw(10)<<setfill('-')<<"+";
	cout<<setw(10)<<setfill('-')<<"+"<<endl;
	cout<<"|";
	cout<<setw(6)<<setfill(' ')<<"Dec";
	cout<<setw(4)<<"|";
	if (c=='H' || c=='h')
		cout<<setw(6)<<"Hex";
	else
		cout<<setw(6)<<"Oct";
	cout<<setw(4)<<"|"<<endl;
	cout<<"+";
	cout<<setw(10)<<setfill('-')<<"+";
	cout<<setw(10)<<setfill('-')<<"+"<<endl;
	for(i=pr; i<(pr+nbr); i++){
		cout<<"|";
		cout<<setw(6)<<setfill(' ')<<dec<<i;
		cout<<setw(4)<<"|";
		if (c=='H' || c=='h')
			cout<<setw(6)<<hex<<i;
		else
			cout<<setw(6)<<oct<<i;
		cout<<setw(4)<<"|"<<endl;
	}
	cout<<"+";
	cout<<setw(10)<<setfill('-')<<"+";
	cout<<setw(10)<<setfill('-')<<"+"<<endl;
	
	return 0;
}
