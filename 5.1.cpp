#include<iostream>
using namespace std;
class Time             // 定义Time类
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
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;

};
int main()
{
	Time t1;
	//定义t1为Time类对象
	t1.set();
	t1.show();
	return 0;
}