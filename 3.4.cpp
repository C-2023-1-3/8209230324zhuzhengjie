#include"mytriangle.h"
int main() {
	double a, b, c;
	cout << "请输入第一条边的长：";
	cin >> a;
	cout << "请输入第二条边的长：";
	cin >> b;
	cout << "请输入第三条边的长：";
	cin >> c;
	is_valid(a, b, c);
}
