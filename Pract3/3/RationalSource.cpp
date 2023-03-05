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

int Rational::get_a() {
	return a;
}

int Rational::get_b() {
	return b;
}

Rational Rational::operator + (Rational& exmp1) {
	int a1, b1, a2, b2;
	b1 = this->b * exmp1.b;
	b2 = b1;
	a1 = this->a * exmp1.b;
	a2 = exmp1.a * this->b;
	Rational temp{ a1 + a2, b1 };
	return temp;
}

Rational operator - (Rational& exmp1, Rational& exmp2) {
	int a1, b1, a2, b2;
	b1 = exmp1.b * exmp2.b;
	b2 = b1;
	a1 = exmp1.a * exmp2.b;
	a2 = exmp2.a * exmp1.b;
	Rational tmp{ a1 - a2, b2 };
	return tmp;
	
}

void Rational::operator = (Rational& exmp1) {
	this->a = exmp1.a;
	this->b = exmp1.b;
	return;
}

bool operator == (Rational& exmp1, Rational& exmp2) {
	if ((exmp1.get_a() == exmp2.get_a()) and (exmp1.get_b() == exmp2.get_b())) {
		return true;
	}
	else {
		return false;
	}
}

Rational& Rational::operator++ () {
	this->a = ++a;
	return *this;
}

bool operator >(Rational& exmp1, Rational& exmp2) {
	int a1, b1, a2, b2;
	b1 = exmp1.get_b() * exmp2.get_b();
	b2 = b1;
	a1 = exmp1.get_a() * exmp2.get_b();
	a2 = exmp2.get_a() * exmp1.get_b();
	if (a1 > a2) {
		return true;
	}
	else {
		return false;
	}
}





