#include"mytriangle.h"
bool is_valid(double a, double b, double c) {
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "三角形的面积是：" << are_a(a, b, c);
		return true;
	}
	else cout << "你输入的边无法构成三角形。";
	return false;
}
double are_a(double a, double b, double c) {
	int d = (a + b + c) / 2;
	return sqrt(d * (d - a) * (d - b) * (d - c));
}
