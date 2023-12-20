#include <iostream> 
using namespace std;
class point {
private :
	int x, y;
public:
	point () :x(60), y(80) {}
		void setpoint(int i,int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "(" << x << "," << y << ")";
	}
};
int main() {
	point p1;
	p1.setpoint(10, 50);
	p1.display();
}