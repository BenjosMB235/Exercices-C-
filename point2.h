class point
{
	private:
		float x;
		float y;
	public:
		point(float a, float b);
		void deplace (float x2, float y2);
		void homothetie(float);
		void rotation(float);
		float getAbcisse();
		float getOrdonne();
		float rho();
		float theta();
};
