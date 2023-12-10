#include<iostream>
using namespace std;
void count(const char a[], int counts[])
{
	for (int j = 0; j < 100; j++)
	{
		if ((int)a[j] < 90) {
			counts[(int)a[j] - 65]++;
		}
		else {
			counts[(int)a[j] - 97]++;
		}
}
}
int main() {
	char a[100];
	int size1;
	cout << "请输入字符串的长度与字符：";
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cin >> a[i];
	}
	static int counts[26];
	count(a, counts);
	for (int k = 0; k < 26; k++)
	{
		if (counts[k] != 0) {
			cout << (char)(k + 97) << ':' << counts[k] <<" " << "次" << endl;
		}
	}
}