#include <iostream>
#include "figure.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float x1, x2, x3, x4, y1, y2, y3, y4;
	Figure* ptr[3];
	for (int i = 0; i < 3; i++) {
		cout << '\n' << "Ввод координат четырехугольника №" << i + 1 << ' ';
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		ptr[i] = new Figure{ x1, x2, x3, x4, y1, y2, y3, y4 };
		ptr[i]->show();
	}
	delete [] ptr;
	return 0;
}