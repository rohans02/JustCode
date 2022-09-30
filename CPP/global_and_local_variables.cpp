#include <iostream>
using namespace std;
int g=0;
void fun1()
{
    int a=15;
    g=g+a;
}
int main()
{
    g=17;
    fun1();
    g++;
    cout<<"value of g="<<g;
    return 0;
}
