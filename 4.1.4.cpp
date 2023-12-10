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
		for (int i = 0; i < size1 + size2 - 1; i++) { //控制n-1趟冒泡
			for (int j = 0; j < size1 + size2 - 1 - i; j++)
			{
				if (arr3[j] > arr3[j + 1]) { //比较相邻的两个元素
					int tmp; //临时变量
					tmp = arr3[j]; //交换
					arr3[j] = arr3[j + 1];
					arr3[j + 1] = tmp;
				}
			}
		}
	}
int main(){
	int size1, size2, size3;
	int arr1[40],arr2[40];
	cout << "请输入1数组的长度与数字：";
	cin >> size1;
	for (int i = 0; i <size1 ; i++) {
		cin >> arr1[i];
	} 
		cout << "请输入2数组的长度与数字："; 
	cin >> size2;
	for (int j = 0; j < size2; j++) {
		cin >> arr2[j];
	}
	size3 = size1 + size2;
	int arr3[80];
	merge(arr1, size1, arr2, size2, arr3);
	arrange(arr3 ,size1,size2);
	cout << "融合后的数组为：";
	for (int t = 0; t < size3; t++) {
		cout << arr3[t]<<" ";
	}
	}