#include<iostream>
#include<string>
using namespace std;
class Docteur{
	private:
		int mat;
		string nom;
		string speci;
		int exp;
		int nbrPat;
	public:
		Docteur();
		Docteur(int, string, string, int, int);
		Docteur(const Docteur &);
		~Docteur();
		int getmat();
		string getnom();
		string getspeci();
		int getexp();
		int getnbrPat();
		void setmat(int);
		void setnom(string);
		void setspeci(string);
		void setexp(int);
		void setnbrPat(int);
		void saisie();
		void affichage();
		double salaire() const;
		bool compare(const Docteur &);
		
};
