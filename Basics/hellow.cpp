#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << sizeof(n) << endl; //4
    char p;
    cout << sizeof(p) << endl; //1
    bool q;
    cout << sizeof(q) << endl; //1
    float f;
    cout << sizeof(f) << endl; //4
    char str[] = "Smruti";
    cout << sizeof(str) << endl; //7
    wchar_t w;
    cout << sizeof(w) << endl; //2
    long op;
    cout << sizeof(op) << endl; //4

    cout << "Size of char : " << sizeof(char)
         << " byte" << endl;
    cout << "Size of int : " << sizeof(int)
         << " bytes" << endl;
    cout << "Size of short int : " << sizeof(short int)
         << " bytes" << endl;
    cout << "Size of long int : " << sizeof(long int)
         << " bytes" << endl;
    cout << "Size of signed long int : " << sizeof(signed long int)
         << " bytes" << endl;
    cout << "Size of unsigned long int : " << sizeof(unsigned long int)
         << " bytes" << endl;
    cout << "Size of float : " << sizeof(float)
         << " bytes" << endl;
    cout << "Size of double : " << sizeof(double)
         << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t)
         << " bytes" << endl;

    return 0;
}
