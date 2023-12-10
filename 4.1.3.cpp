#include<iostream>
using namespace std;
int main() {
	bool arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = false;
	}
	for (int j = 0; j < 100; j++)
	{
		for (int p = j; p < 100; p += j + 1)
		{
			if (arr[p]) {
				arr[p] = false;
			}
			else arr[p] = true;
		}
	}
	for (int n = 0; n < 100; n++) {
		if (arr[n])
			cout << n + 1<<" ";
	}
}