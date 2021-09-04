#include <bits/stdc++.h>
using namespace std;

void func1();
void func2();

#pragma stratup func1
#pragma exit func2

void func1()
{
    cout << "Inside the Func1()" << endl;
}
void func2()
{
    cout << "Inside the func2()" << endl;
}
int main()
{
    cout << "Inside func()" << endl;
    func1();
    func2();
    return 0;
}