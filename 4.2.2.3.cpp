#include<iostream>
using namespace std;
void arrange(int s1[], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size-i-1; j++) {
			int temp = 0;
			if (s1[j] > s1[j + 1]) {
				temp = s1[j];
				s1[j] = s1[j + 1];
				s1[j + 1] = temp;
			}
		}
	}
}
int main() {
	int size;
	cout << "Ԫ�ظ���Ϊ��";
	cin >> size;
	int* list = new int[size];
	cout << "����Ԫ��Ϊ��";
	for (int d= 0; d < size; d++) {
		cin>> list[d];
	}
	arrange(list, size);
	cout << "�����";
	for (int k = 0; k < size; k++) {
    cout << list[k] << ' ';
	}
	delete list;
}