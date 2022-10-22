#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    string s(b, '#'), s1(b - 1, '.');
    for (int i = 0; i < a; i++)
    {
        if (i % 4 == 1)
        {
            cout << s1 << "#";
        }
        else if (i % 4 == 3)
        {
            cout << "#" << s1;
        }
        else
        {
            cout << s;
        }
        cout << endl;
    }
}