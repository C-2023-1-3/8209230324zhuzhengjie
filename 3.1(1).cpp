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
	cout << "�������һ����������";
	cin >> a;
	cout << "������ڶ�����������";
	cin >> b;
	cout << "���Լ����" <<max1(a,b) << endl;

}