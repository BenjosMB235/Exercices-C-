#include<iostream>
#include<iomanip>

using namespace std;
int main(){
	int n;
	cout<<"Entre un entier :"<<endl;
	cin>>n;
	cout<<uppercase<<hex<<n<<endl;
	cout<<oct<<n<<endl;
	
	cout<<uppercase<<setbase(16)<<n<<endl;
	cout<<setbase(8)<<n<<endl;
	
	return 0;
}
