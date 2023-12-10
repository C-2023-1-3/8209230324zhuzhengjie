#include<iostream>
using namespace std;
int& max1(int a, int b) {
	int c = 1;
	 static int temp1 = 0;
	while (c <= a && c <= b) {
		if (a % c == 0 && b % c == 0) {
			temp1 = c;
		}
		c++;
	}
	return temp1;
}
int& min1(int a, int b) {
	int d = a*b;
	static int temp2 = 0;
	while (d >= a && d >= b)
	{
		if (d % a == 0 && d % b == 0) {
			temp2 = d;
		}
		d--;
	}
	return temp2;
}
int main() {
	unsigned int a, b;
	cout << "请输入第一个正整数：";
	cin >> a;
	cout << "请输入第二个正整数：";
	cin >> b;
	cout << "最大公约数：" << max1(a, b) << endl;
	cout << "最小公倍数：" << min1(a,b);

}