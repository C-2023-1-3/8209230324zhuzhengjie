#include<iostream>
using namespace std;
class  rectangle {
private:
	double length;
	double width;
	double height;
public:
	void set_value()
	{
		cout << "�����볤�ȣ�";
		cin >> length;
		cout << "�������ȣ�";
		cin >> width;
		cout << "������߶ȣ�";
		cin >> height;
	}
	void show() {
		cout<<"���Ϊ��"<<length * width * height<<endl;
	}
};
int main() {
	rectangle r1, r2, r3;
	cout << "��һ����"<<endl;
	r1.set_value();
	r1.show();
	cout << "�ڶ�����"<<endl;
	r2.set_value();
	r2.show();
	cout << "��������"<<endl;
	r3.set_value();
	r3.show();

}