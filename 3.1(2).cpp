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
	cout << "�������һ����������";
	cin >> a;
	cout << "������ڶ�����������";
	cin >> b;
	cout << "���Լ����" << max1(a, b) << endl;
	cout << "��С��������" << min1(a,b);

}