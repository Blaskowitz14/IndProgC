#include "Rational.h";
#include <iostream>
using namespace std;

Rational::Rational(int a1, int b1) {
	valid_prove = true;
	a = a1;
	b = b1;
	if (b == 0) {
		cout << "Ошибка: Знаменатель равный нулю" << '\n';
		valid_prove = false;
		return;
	}
	if (a > b) {
		a = a % b;
		if (a == 0) {
			++a;
		}
	}
	for (int i = b / 2; i >= 2; i--) {
		if (a % i == 0 and b % i == 0) {
			a = a / i;
			b = b / i;
			break;
		}
	}
}

void Rational::set(int a1, int b1) {
	valid_prove = true;
	a = a1;
	b = b1;
	if (b == 0) {
		cout << "Ошибка: Знаменатель равный нулю" << '\n';
		valid_prove = false;
	}
	if (a > b) {
		a = a % b;
	}
	for (int i = b / 2; i >= 2; i--) {
		if (a % i == 0 and b % i == 0) {
			a = a / i;
			b = b / i;
			break;
		}
	}
}

void Rational::show() {
	if (a == b) {
		cout << 1 << '\n';
	}
	else {
	cout << a << '/' << b << '\n';
    }
}