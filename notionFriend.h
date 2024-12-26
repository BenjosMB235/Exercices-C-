#ifndef DEF_POINT
#define DEF_POINT
class point{
	private:
		int x, y;
	public:
		
		point(int abs, int ord);
		friend void affiche(const point &a);
		int getx();
		int gety();
		void setx(int x);
		void sety(int y);
};
#endif
