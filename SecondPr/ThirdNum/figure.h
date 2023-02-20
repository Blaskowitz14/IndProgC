#pragma once
class Figure {

private:
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	float s;
	float p;
	float st1, st2, st3, st4;
	float lenght(float xx1, float xx2, float yy1, float yy2);
public:
	Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);
	void show();
	bool is_prug();
	bool is_square();
	bool is_romb();
	bool is_in_circle();
	bool is_out_circle();
};