#include <iostream>
using namespace std;

void fun3()
{
    int var4 = 25;
    cout << var4 << endl;
}

void fun2()
{
    int var3 = 10;
    cout << var3 << endl;
    fun3();
}

void fun1()
{
    int var2 = 5;
    cout << var2 << endl;
    fun2();
}

int main()
{
    int var1 = 3;
    cout << var1 << endl;
    fun1();
    return 0;
}
