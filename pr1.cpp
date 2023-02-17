#include <iostream>
#include <math.h>
using namespace std;

class Triangle
{
private:

	double a, b, c;

public:

	bool exst_tr() 
	{
		if ((a + b > c) && (a + c > b) && (b + c > a)) {
			return true;
		}
		else {
			return false;
		}
	}

	void set(double a1, double b1, double c1) 
	{
		a = a1;
		b = b1;
		c = c1;
	}

	void show() 
	{
		cout << "A = " << a << " B = " << b << " C = " << c << '\n';
	}

	double perimetr() 
	{
		return a + b + c;
	}

	double square()
	{
		double ppp = (a + b + c) / 2;
		return sqrt(ppp * (ppp - a) * (ppp - b) * (ppp - c));
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	Triangle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите стороны: ";
		cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (not mas[i].exst_tr()) {
			cout << '\n' << "Треугольника с такими сторонами нет" << '\n';
			--i;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Треугольник № " << i + 1 << '\n';
		cout << "Периметр: " << mas[i].perimetr() << '\n';
		cout << "Площадь: " << mas[i].square() << '\n';
	}
	return 0;
} 


