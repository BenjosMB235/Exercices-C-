#include<iostream>
#include<string>

using namespace std;

class article{
	private:
		int ref;
		string name;
		float prixht;
		int qtite;
	public:
		article();
		article(int, string, float, int);
		string getName();
		int getRef();
		float getPrix();
		int getQtite();
		void approvisionner(int);
		bool vendre(int);
		float prixTTC();	
};
