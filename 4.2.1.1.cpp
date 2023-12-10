#include<iostream>
using namespace std;
void main()
{
int i, j, * pi, * pj;     //此处的*表示定义指针变量，而非间接运算符
pi = &i;
pj = &j;
i = 5; j = 7;
cout << i << '\t' << j << '\t' << pi << '\t' << pj;
cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j;
    }
   // 运行结果：
        //上述结果中，pi与& i, pj与& j是地址值，随编译程序而变化，不确定。
