#include<iostream>
#include<string>
using namespace std;
 
 class Personne{
 	private:
 		string nom;
 		string prenom;
 		int age;
 	public:
 		Personne(string, string, int);
 		Personne(const Personne &);
 		string getNom();
 		string getPrenom();
 		int getAge();
 		void setNom(string);
 		void setPrenom(string);
 		void setAge(int);
 		void affiche();
 };
 class Etudiant:public Personne{
 	private:
 		string CNE;
 	public:
 		Etudiant(string, string, int, string);
 		Etudiant(const Etudiant &);
 		string getCNE();
 		void setCNE(string);
 		void affiche();
 };
 class Fonctionnaire:public Personne{
 	private:
 		float s;
 	public:
 		Fonctionnaire(string, string, int, float);
 		Fonctionnaire(const Fonctionnaire &);
 		float getS();
 		void setS(float);
 		void affiche();
 };
