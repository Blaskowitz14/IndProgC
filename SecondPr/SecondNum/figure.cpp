#include "figure.h"
#include <math.h>
using namespace std;

Circle::Circle(float r, float x, float y)
{
	radius = r ;
	x_center = x + 1;
	y_center = y + 1;
}

void Circle::set_circle(float r, float x, float y)
{
	radius = r;
	x_center = x;
	y_center = y;
}

float Circle::square() 
{
	return 3.14 * pow(radius, 2);
}

bool Circle::triangle_around(float a, float b, float c) 
{
	float halfper = (a + b + c) / 2;
	float s = sqrt((halfper * (halfper - a) * (halfper - b) * (halfper - c)));
	if (radius == ((a * b * c) / (4 * s))) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::triangle_in(float a, float b, float c)
{
	float kat1, kat2, osn;
	if (a == b == c)
	{
		return radius == ((a * sqrt(3)) / 6);
	}
	else if (a == b or a == c or b == c)
	{
		float rav, osn;
		if (a == b)
		{
			rav = a;
			osn = c;
		}
		else if (a == c)
		{
			rav = c;
			osn = b;
		}
		else
		{
			rav = b;
			osn = a;
		}
		return radius == ((osn / 2) * sqrt(((2 * rav - osn) / (2 * rav + osn))));
	}
	else if (((pow(a, 2) + pow(b, 2) == pow(c, 2)) or (pow(a, 2) + pow(c, 2) == pow(b, 2)) or (pow(b, 2) + pow(c, 2) == pow(a, 2))))
	{
		if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
			kat1 = a;
			kat2 = b;
			osn = c;
		}
		else if (pow(a, 2) + pow(c, 2) == pow(b, 2)) {
			kat1 = a;
			kat2 = c;
			osn = b;
		}
		else if (pow(b, 2) + pow(c, 2) == pow(a, 2)) {
			kat1 = b;
			kat2 = c;
			osn = a;
		}
		return (0.5 * (kat1 + kat2 - osn) == radius);
	}
	else
	{
		return ((square() * 2) / (a + b + c) == radius);
	}
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr)
{
	r = r + 1;
	x_cntr = x_cntr + 1;
	y_cntr = y_cntr + 1;
	if (x_center == x_cntr and y_center == y_cntr) {
		return true;
	}
	else if (pow(x_cntr - x_center, 2) + pow(y_cntr - y_center, 2) > pow(r + radius, 2)) {
		return true;
	}
	else {
		return false;
	}
}
