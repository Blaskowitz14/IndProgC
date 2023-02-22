#include "Rational.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int num_of_elements, a, b;
	cout << "���� ���������� ���������: " << '\n';
	cout << "___________________________" << '\n';
	cin >> num_of_elements;
	Rational** arr = new Rational*[num_of_elements];
	for (int i = 0; i < num_of_elements; i++) {
		cout << "�������#" << i + 1 << '\n';
		cout << "���� �������� ��������� � �����������" << '\n';
		cin >> a >> b;
		arr[i] = new Rational(a, b);
		if (not arr[i]->valid_prove) {
			i--;
			cout << "___________________________" << '\n';
			continue;
		}
		arr[i]->show();
		cout << "___________________________" << '\n';
	}
	delete[] arr;
	return 0;
}
