#include<iostream>
#include<cstdio>


namespace global{
	namespace Entier{
		int Addition(int x, int y){
			return x+y;
		}
		int Soustraction(int x, int y){
			return x-y;
		}
		int Multiplication(int x, int y){
			return x*y;
		}
		float Division(int x, int y){
			return (float)x/y;
		}
	}
	namespace Reel{
		float Addition(float x, float y){
			return x+y;
		}
		float Soustraction(float x, float y){
			return x-y;
		}
		float Multiplication(float x, float y){
			return x*y;
		}
		float Division(float x, float y){
				return x/y;
		}
	}
}
using namespace global;
using namespace Entier;
using namespace Reel;
using namespace std;

int main(){
	int a, b;
	float x, y;
	
	cout<<"Manipulation des espaces des noms"<<endl;
	printf("Saisir deux entiers :\n");
	scanf("%d%d", &a, &b);
	printf("Saisir deux réels :\n");
	scanf("%f%f", &x, &y);
	
	printf("\nFonctions entiers :\n");
	
	printf("a+b = %d\n", Addition(a, b));
	printf("a-b = %d\n", Soustraction(a, b));
	printf("a*b = %d\n", Multiplication(a, b));
	if (b != 0)
		printf("a/b = %f\n", Entier::Division(a, b));
	else
		printf("Division par 0 impossible   !");
	
	printf("\nFonctions réels :\n");
	
	printf("a+b = %f\n", Addition(x, y));
	printf("a-b = %f\n", Soustraction(x, y));
	printf("a*b = %f\n", Multiplication(x, y));
	if (y != 0)
		printf("a/b = %f\n", Reel::Division(a, b));
	else
		printf("Division par 0 impossible   !");
	
	return 0;
}

