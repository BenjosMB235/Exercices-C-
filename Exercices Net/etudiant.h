#include<iostream>
#include<string>

using namespace std;

class etudiant{
	private:
		int mat;
		string nomEtu;
		int nbrNotes;
		float *tabNotes=NULL;
	public:
		etudiant();
		etudiant(int mat, string nom, int nbr);
		etudiant(const etudiant &e);
		~etudiant();
		int getmat() const;
		string getnomEtu() const;
		int getnbrNotes() const;
		void setmat(int mat);
		void setnomEtu(string nom);
		void setnbrNotes(int nbr);
		void saisie();
		void affichage() const;
		float moyenne() const;
		bool admis() const;
		bool compare(const etudiant &e) const;
};
