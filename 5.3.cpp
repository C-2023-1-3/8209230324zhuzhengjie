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
		cout << "请输入长度：";
		cin >> length;
		cout << "请输入宽度：";
		cin >> width;
		cout << "请输入高度：";
		cin >> height;
	}
	void show() {
		cout<<"面积为："<<length * width * height<<endl;
	}
};
int main() {
	rectangle r1, r2, r3;
	cout << "第一个："<<endl;
	r1.set_value();
	r1.show();
	cout << "第二个："<<endl;
	r2.set_value();
	r2.show();
	cout << "第三个："<<endl;
	r3.set_value();
	r3.show();

}