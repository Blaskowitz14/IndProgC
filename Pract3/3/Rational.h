#pragma once
class Rational {
private:

	int a, b;

public:
	int get_a();
	
	int get_b();

	Rational(int a1, int b1);
	
	bool valid_prove;
	
	void set(int a1, int b1);

	void show();

	Rational operator + (Rational &exmp1);

	friend Rational operator - (Rational &exmp1, Rational &exmp2);

	Rational& operator ++ ();

	void operator = (Rational& exmp1);
};

bool operator == (Rational& exmp1, Rational& exmp2);

bool operator > (Rational& exmp1, Rational& exmp2);
