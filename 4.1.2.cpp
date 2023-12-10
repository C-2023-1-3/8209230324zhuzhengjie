#include<iostream>
using namespace std;
void sort(double arr[]) {

	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (arr[j] > arr[j + 1])
			{
				double temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				changed = true;
			}
	} while (changed);

}
int main() {
	double arr[10];
	cout << "请输入数组：";
	for (int p = 0; p <= 9; p++)
	{
		cin >>arr[p];
	}
	sort(arr);
	cout << "排序后：";
	for (int i = 0; i <= 9; i++)
	{
		cout << arr[i]<<" ";
	}
}