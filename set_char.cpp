#include <cstring>
#include <iostream>
using namespace std ;

#define N_CAR_MAX 256 // on pourrait utiliser UCHAR_MAX d�fini
// dans <limits.h>
class set_char{
	unsigned char ens [N_CAR_MAX] ;
// tableau des indicateurs (pr�sent/absent)
// pour chacun des caract�res possibles
	public :
	set_char () ; // constructeur
	void ajoute (unsigned char) ; // ajout d'un �l�ment
	int appartient (unsigned char) ; // appartenance d'un �l�ment
	int cardinal () ; // cardinal de l'ensemble
} ;
set_char::set_char ()
{ 
	int i ;
	for (i=0 ; i<N_CAR_MAX ; i++) ens[i] = 0 ;
}
void set_char::ajoute (unsigned char c)
{ 
	ens[c] = 1 ;
}
int set_char::appartient (unsigned char c)
{ 
	return ens[c] ;
}
int set_char::cardinal ()
{ 
	int i, n ;
	for (i=0, n=0 ; i<N_CAR_MAX ; i++) if (ens[i]) n++ ;
	return n ;
}

main()
{ 
	set_char ens ;
	char mot [81] ;
	cout << "donnez un mot " ;
	cin >> mot ;
	int i ;
	for (i=0 ; i<strlen(mot) ; i++) 
		ens.ajoute (mot[i]) ;
	cout << "il contient " << ens.cardinal () << " caract�res diff�rents" ;
	if (ens.appartient('e')) 
		cout << "le caract�re e est pr�sent\n" ;
	else 
		cout << "le caract�re e n'est pas pr�sent\n" ;
}
