#include<iostream>
#include<iomanip>
 using namespace std;
 
 int main(){
 	cout<<"Manipulation des flux !"<<endl;
 	cout<<hex<<20<<endl;
 	cout<<16<<endl;
 	cout<<dec<<16<<endl;
 	

 	cout<<hex<<14<<endl;
 	cout<<oct<<14<<endl;
 	cout<<dec<<14<<endl;
 	
 	//Utilisation de setbase()
 	cout<<setbase(16)<<14<<endl;
 	cout<<setbase(8)<<14<<endl;
 	cout<<setbase(10)<<14<<endl;
 	
 	//Utilisation de showbase
 	cout<<showbase<<hex<<14<<endl;
 	cout<<oct<<14<<endl;
 	cout<<dec<<14<<endl;
 	
 	//Utilisation de noshowbase
 	cout<<noshowbase<<hex<<14<<endl;
 	cout<<oct<<14<<endl;
 	cout<<dec<<14<<endl;
 	
 	//Ecriture scientifique
 	cout<<scientific<<554.33<<endl;
 	cout<<scientific<<0.0055<<endl;
 	
 	//Ecriture fixe
 	cout<<scientific<<554.33<<endl;
 	cout<<fixed<<5.543300e+002<<endl;
 	
 	//Utilisation de setprecision
 	cout<<setprecision(4)<<15.84692<<endl;
 	
 	//Utilisation de uppercase et noupperxcase
 	cout<<uppercase<<hex<<15<<endl;
 	cout<<hex<<14<<endl;
 	cout<<nouppercase<<hex<<15<<endl;
 	cout<<hex<<14<<endl;
 	
 	cout<<"bonjour"<<endl;
 	cout<<setw(14)<<"bonjour"<<endl;
 	cout<<setw(14)<<setfill('#')<<"bonjour"<<endl;
 	cout<<setw(14)<<setfill('#')<<left<<"bonjour"<<endl;
 	cout<<setw(14)<<setfill('#')<<right<<"bonjour"<<endl;
 	return 0;
 }
