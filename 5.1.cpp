#include<iostream>
using namespace std;
class Time             // ����Time��
{
	public:
	void set() {
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void show() {
		cout << hour << ":" << minute << ":" << sec;
	}
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;

};
int main()
{
	Time t1;
	//����t1ΪTime�����
	t1.set();
	t1.show();
	return 0;
}