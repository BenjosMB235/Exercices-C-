#ifndef DEF_COMPLEXE
#define DEF_COMPLEXE

#include<iostream>
using namespace std;

class Complexe{
	private:
		float re;
		float im;
	public:
		Complexe();
		Complexe(float re, float im);
		~Complexe();
		float getre();
		float getim();
		void setre(float re);
		void setim(float im);
		void affiche();
		friend void affiche2(const Complexe &z);
		float module();
		friend float module2(const Complexe &z);
		Complexe& operator=(const Complexe &z);
		friend Complexe& operator+=(Complexe &z1, const Complexe &z2);
		friend Complexe& operator-=(Complexe &z1, const Complexe &z2);
		Complexe& operator-();
		Complexe& operator++();
		friend bool operator==(const Complexe &z1, const Complexe &z2);
		friend ostream& operator<<(ostream& flux, Complexe &z);
		friend istream& operator>>(istream& flux, Complexe &z);
};

#endif
