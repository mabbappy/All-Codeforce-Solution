
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    string s;
    cin >> a >> b;
    cin >> s;
    while (b--)
    {
        for (int i = 0; i < a; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    cout << s;
}
