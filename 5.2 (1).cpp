#include <iostream>            
#include"student.h"
using namespace std;
int main()
{
    Student stud1;  
    Student stud(7, "tcg", 'm');
    cout << "ÇëÊäÈëstud1:";
    stud1.set_value();
    cout << "stud1:" << endl;
    stud1.display(); 
    cout << "stud:" << endl;
    stud.display();
    return 0;
}
