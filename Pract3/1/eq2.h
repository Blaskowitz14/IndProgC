#pragma once

class Eq2 {
public:
	double a, b, c;
	double D;
	Eq2(double a1, double b1, double c1);
	void set(double a1, double b1, double c1);
	double find_x();
	double find_y(double x1);
};

Eq2 operator +(Eq2& exmp1, Eq2& exmp2);

