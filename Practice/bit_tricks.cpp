#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printBinary(int n)
{
    string s;
    while (n != 0)
    {
        if (n & 1)
            s.push_back('1');
        else
            s.push_back('0');
        n = n >> 1;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}
void oddEven(int n)
{
    if (n & 1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;
}
void multiplay(int n)
{
    cout << (n << 1) << endl;
}

void divide(int n)
{
    cout << (n >> 1) << endl;
}

void CtoS(char ch)
{
    // cout << (char)((int)ch | (1 << 5)) << endl;
    cout << char(ch | ' ') << endl;
}

void StoC(char ch)
{
    cout << char(ch & '_') << endl;
}

void clearLSBs(int n, int pos)
{
    n = (~0 << pos) & n;
    cout << "The number is: ";
    printBinary(n);
}

void clearMSBs(ll n, ll pos)
{
    n = n & ((1 << pos) - 1);
    cout << "The number is: ";
    printBinary(n);
}

bool checkPowerTwo(ll n)
{
    return __builtin_popcount(n) == 1;
}

int32_t main()
{
    ll n;
    cin >> n;
    printBinary(n);
    // oddEven(n);
    // multiplay(n);
    // divide(n);

    // char s;
    // cout << "Enter a upper character: " << endl;
    // cin >> s;
    // CtoS(s);
    // cout << "Enter a loewer character: " << endl;
    // cin >> s;
    // StoC(s);
    // ll pos;
    // cin >> pos;
    // clearLSBs(n, pos);
    // clearMSBs(n, pos);

    // if (checkPowerTwo(n))
    //     cout << "This is a power of two." << endl;
    // else
    //     cout << "This is not a power of two." << endl;

        return 0;
}