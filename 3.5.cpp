#include<iostream>
using namespace std;
int day(int a,int i)
{       
		int temp;
		temp = (a + 1) * 2;
		a = temp;
		i++;
		if (i < 9) { day(a, i); }
	else return a;
}
int main() {
	cout<<"��һ�����ӵĸ���Ϊ��" << day(1, 0);
}