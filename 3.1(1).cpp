#include<iostream>
using namespace std;
int max1(int a, int b) {
	int c = 1;
	int temp = 0;
	while (c <= a && c <= b) {
		if (a % c == 0 && b % c == 0) {
			temp = c;
		}
		c++;
	}
	return temp;
}
int main() {
	unsigned int a, b;
	cout << "请输入第一个正整数：";
	cin >> a;
	cout << "请输入第二个正整数：";
	cin >> b;
	cout << "最大公约数：" <<max1(a,b) << endl;

}