#include<iostream>

using namespace std;

bool NombreParfait(int n){
	int soe=0;
	for (int i=1; i<n; i++)
		if (n%i==0)
			soe=soe+i;
	return soe==n;
}
