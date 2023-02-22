#include "eq2.h"
#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	Eq2* exmp1, *exmp2;
	double a, b, c, a1, b1, c1;
	cout << "Ввод парметров двух квадратных уравнений" << '\n';
	cin >> a >> b >> c >> a1 >> b1 >> c1;
	exmp1 = new Eq2(a, b, c);
	exmp2 = new Eq2(a1, b1, c1);
	*exmp1 = *exmp1 + *exmp2;
	cout << "Результат сложение двух экземпляров: ";
	cout << exmp1->a << ' ' << exmp1->b << ' ' << exmp1->c << '\n';
	a = exmp1->find_x();
	cout <<  "X = " << a << '\n';
	cout << "Y = " << exmp1->find_y(a);
	return 0;
}