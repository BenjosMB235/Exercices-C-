#include <iostream>

using namespace std;

struct essai{
	int n;
	float x;
};
void raz(essai &a);
int main(){
	essai b;
	raz(b);
	cout<<"On a :"<<endl;
	cout<<b.n<<" et " <<b.x<<endl;
	return 0;
}
void raz(essai &a){
	
	a.n=0;
	a.x=0;
}
