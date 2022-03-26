#include <bits/stdc++.h>
using namespace std;

#define ll long long

void show_num(int n)
{
    if (n == 0)
        return;
    show_num(n >> 1);
    cout << (n & 1);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n;
    cin >> n;
    show_num(n);
    cout << endl;
    // To know a number is even or odd
    if (n & 1)
        cout << "ODD\n";
    else
        cout << "YES\n";

    // Multiply by 2
    cout << (n << 1) << endl;
    // Diveded by 2
    cout << (n >> 1) << endl;
    // Upper case
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        cout << ch << " = ";
        show_num((int)ch);
        cout << endl;
    }

    // Lowercase letter
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << ch << " ";
        show_num((int)ch);
        cout << endl;
    }

    // Upper case-->Lowercase
    char A = 'A';
    char a = A | (1 << 5);
    cout << a << endl;

    // Lower case ->upper case
    a = 'a';
    A = a & (~(1 << 5));
    cout << A << endl;

    // Easy way to convert(char(1<<5) ==white space)
    A = 'A';
    a = A | ' ';
    cout << a << endl;

    //( Ascii of char ('_') = 1011111)
    a = 'a';
    A = a & '_';
    cout << A << endl;

    // clear LSB(i included )
    ll num = 63, i = 3; /*(Zero indexing)*/
    ll b = num & (~((1 << (i + 1)) - 1));
    show_num(b);
    cout << endl;

    // clear MSB's(i excluded)
    num = 63, i = 3;
    b = num & ((1 << (i + 1)) - 1);
    show_num(b);
    cout << endl;

    // check power of two
    num = 16;
    if (n & (n - 1))
    {
        cout << "This a power of two.";
    }
    else
    {
        cout << "This is not a power of two.";
    }

        return 0;
}