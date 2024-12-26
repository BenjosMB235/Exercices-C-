#include<iostream>
using namespace std;
class Time{
	private:
		int h;
		int mn;
		int s;
	public:
		Time();
		Time(int h, int mn, int s);
		Time(char *heure);
		Time(const Time &heure);
		int geth();
		int getmn();
		int gets();
		void seth(int h);
		void setmn(int mn);
		void sets(int s);
		friend int compare(const Time &h1, const Time &h2);
		void changeTime(int hs);
		friend ostream& operator<<(ostream& flux, Time &h);
};
