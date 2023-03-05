#include "Rational.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int num_of_elements, a, b;
	cout << "¬вод количества элементов: ";
	cin >> num_of_elements;
	cout << "___________________________" << '\n';
	Rational** array = new Rational*[num_of_elements];
	for (int i = 0; i < num_of_elements; i++) {
		cout << "Ёлемент# " << i + 1 << '\n';
		cout << "¬вод значений числител€ и знаменател€" << '\n';
		cin >> a >> b;
		array[i] = new Rational(a, b);
		if (not array[i]->valid_prove) {
			i--;
			cout << "___________________________" << '\n';
			continue;
		}
		array[i]->show();
		cout << "___________________________" << '\n';

		


	}
	delete[] array;

	cout << endl << "¬вод четного количества элементов: ";
	cin >> num_of_elements;
	cout << "___________________________" << endl;
	Rational** array1 = new Rational*[num_of_elements];
	for (int i = 0; i < num_of_elements - 1; i++) {
		cout << "Ёлементы# " << i + 1 << " и " << i + 2 << endl;
		cout << "¬вод значений числител€ и знаменател€" << endl;
		cin >> a >> b;
		array1[i] = new Rational(a, b);
		cout << "¬вод значений числител€ и знаменател€" << endl;
		cin >> a >> b;
		array1[i+1] = new Rational(a, b);
		cout << "___________________________" << endl;

		cout << "–езультат операции сложени€: " << endl;
		Rational plus = *array1[i] + *array1[i + 1];
		plus.show();
		cout << "___________________________" << endl;

		cout << "–езультат операции вычитани€: " << endl;
		Rational minus = *array1[i] - *array1[i + 1];
		minus.show();
		cout << "___________________________" << endl;

		cout << "–езультат операции сравнени€(==): " << endl;
		cout << (*array1[i] == *array1[i + 1]) << endl;
		cout << "___________________________" << endl;
        
		cout << "–езультат операции сравнени€(>): " << endl;
		cout << (*array1[i] > *array1[i + 1]) << endl;
		cout << "___________________________" << endl;

		cout << "–езультат операции инкремента: " << endl;
		++*array1[i];
		++*array1[i + 1];
		array1[i]->show();
		array1[i + 1]->show();
		cout << "___________________________" << endl;

		cout << "–езультат операции присваивани€: " << endl;
		*array1[i] = *array1[i + 1];
		array1[i]->show();
		cout << "___________________________" << endl;


	}
	delete[] array1;


	return 0;
}
