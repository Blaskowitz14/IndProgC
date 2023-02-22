#include "eq2.h"
#include <math.h>
#include <iostream>
using namespace std;

Eq2::Eq2(double a1, double b1, double c1) 
{
	a = a1;
	b = b1;
	c = c1;
	D = b * b - 4 * a * c;
}
void Eq2::set(double a1, double b1, double c1) 
{
	a = a1;
	b = b1;
	c = c1;
	D = b * b - 4 * a * c;
}
double Eq2::find_x() 
{
	if (D < 0) {
		cout << "Нет корней" << '\n';
		return 0;
	}
	else if (D == 0) 
	{
		cout << "1 корень" << '\n';
		return (-b / (2 * a));
	}
	else if (D > 0) 
	{
		double x1, x2;
		cout << "2 корня" << '\n';
		x1 = ((- b + sqrt(D)) / (2 * a));
		x2 = ((- b - sqrt(D)) / (2 * a));
		if (x1 > x2)
		{ 
			return x1;
		}
		else 
		{
			return x2;
		}
	}
}
double Eq2::find_y(double x1) 
{
	return a * (x1 * x1) + b * x1 + c;
}
Eq2 operator +(Eq2& exmp1, Eq2& exmp2) {
	Eq2* temp = new Eq2(0, 0, 0);
	temp->set(exmp1.a + exmp2.a, exmp1.b + exmp2.b, exmp1.c + exmp2.c);
	return *temp;
}
