#pragma once
class Rational {
private:
	int a, b;
public:
	Rational(int a1, int b1);
	bool valid_prove;
	void set(int a1, int b1);
	void show();
};