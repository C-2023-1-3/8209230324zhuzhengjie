#pragma once
class Student              
{
public:                  
    void display();
    Student() {}
    Student(int a, const char b[], char c);
    void set_value();
   private:
    int num;
    char name[20];
    char sex;
};
