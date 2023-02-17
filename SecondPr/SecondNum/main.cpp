#include <iostream>
#include "figure.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	Circle mas[3] = {Circle(0, 0, 0), Circle(0, 0, 0), Circle(0, 0, 0)};
	for (int i = 0; i < 3; i++) {
		cout << '\n' << "Ввод параметров круга №" << i + 1 << ' ';
		cin >> a >> b >> c;
		mas[i].set_circle(a, b, c);
		cout << '\n' << "Площадь круга №" << i + 1 << ' ' << mas[i].square();
		cout << '\n' << "Параметры треугольника для круга №" << i + 1 << ' ';
		cin >> a >> b >> c;
		if (mas[i].triangle_around(a, b, c)) {
			cout << '\n' << "В круг можно вписать этот треугольник";
		}
		else {
			cout << '\n' << "В круг нельзя вписать этот треугольник";
		}
		if (mas[i].triangle_in(a, b, c)) {
			cout << '\n' << "В треугольник можно вписать этот круг";
		}
		else {
			cout << '\n' << "В треугольник нельзя вписать этот круг";
		}
		cout << '\n' << "Ввод данных второго круга" << ' ';
		cin >> a >> b >> c;
		if (mas[i].check_circle(a, b, c)) {
			cout << '\n' << "Окружности пересекаются";
		}
		else {
			cout << '\n' << "Окружности не пересекаются";
		}
	}

}



