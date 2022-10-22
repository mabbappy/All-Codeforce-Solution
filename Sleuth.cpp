#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i = s.size() - 2;
    while (s[i] == ' ')
        i--;
    if (s[i] == 'A' or s[i] == 'E' or s[i] == 'e' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U' or s[i] == 'Y' or s[i] == 'a' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'y')
        cout << "YES";
    else
        cout << "NO";
}
