#include<iostream>
using namespace std;
void merge( int arr1[], int size1, int arr2[], int size2, int arr3[])
{
	for (int n = 0; n < size1; n++) {
		arr3[n] = arr1[n];
	}
	int r = 0;
	for (int g = size1; g < size1 + size2; g++) {
		arr3[g] = arr2[r];
		r++;
	}
}
	void arrange(int arr3[] ,int size1,int size2) {
		for (int i = 0; i < size1 + size2 - 1; i++) { //����n-1��ð��
			for (int j = 0; j < size1 + size2 - 1 - i; j++)
			{
				if (arr3[j] > arr3[j + 1]) { //�Ƚ����ڵ�����Ԫ��
					int tmp; //��ʱ����
					tmp = arr3[j]; //����
					arr3[j] = arr3[j + 1];
					arr3[j + 1] = tmp;
				}
			}
		}
	}
int main(){
	int size1, size2, size3;
	int arr1[40],arr2[40];
	cout << "������1����ĳ��������֣�";
	cin >> size1;
	for (int i = 0; i <size1 ; i++) {
		cin >> arr1[i];
	} 
		cout << "������2����ĳ��������֣�"; 
	cin >> size2;
	for (int j = 0; j < size2; j++) {
		cin >> arr2[j];
	}
	size3 = size1 + size2;
	int arr3[80];
	merge(arr1, size1, arr2, size2, arr3);
	arrange(arr3 ,size1,size2);
	cout << "�ںϺ������Ϊ��";
	for (int t = 0; t < size3; t++) {
		cout << arr3[t]<<" ";
	}
	}