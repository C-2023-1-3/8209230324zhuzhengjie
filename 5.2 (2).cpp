#include <iostream>
#include"student.h"
using namespace std;
void Student::display()         
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value() 
    {
    char b[20];
    cin >> num;
    cin >> b;
    strcpy_s(name, b);
    cin >> sex;
    }
Student::Student(int a, const char b[], char c)
{
    num = a;
    strcpy_s(name, b);
    sex = c;
    }
