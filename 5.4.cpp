#include <iostream> 
#include <cstring>
using namespace std;
class Student
{
public:
	Student() {} 
	Student(string i, double s) {}
	string id;
	double score;
};
void max(Student* p)
{
	Student* t, * s;
	double max;
	for (t = p, s = t, max = t->score; t < (p + 5); t++)
	{
		if (t->score > max)
		{
			max = t->score;
			s = t;
		}
	}

	cout << "�ɼ������ѧ��Ϊ:" << s->id << " " << max << "��" << endl;
}
int main()
{
	Student s[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "��" << i + 1 << "��ѧ����ѧ�źͳɼ���";
		cin >> s[i].id >> s[i].score;
	}
	max(s);
}