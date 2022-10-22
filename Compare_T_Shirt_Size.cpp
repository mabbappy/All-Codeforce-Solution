#include <bits/stdc++.h>
using namespace std;
void Bappy21()
{
    long long tt;
    cin >> tt;
    while (tt--)
    {
        long long i, n, a[5] = {0}, a1[5] = {0};
        string s, s1;
        cin >> s >> s1;

        if (s[s.size() - 1] > s1[s1.size() - 1])
            cout << "<" << endl;
        else if (s[s.size() - 1] < s1[s1.size() - 1])
            cout << ">" << endl;
        else if (s.size() > s1.size() && s[s.size() - 1] == 'S')
            cout << "<" << endl;
        else if (s.size() < s1.size() && s[s.size() - 1] == 'S')
            cout << ">" << endl;
        else if (s.size() > s1.size() && s[s.size() - 1] == 'L')
            cout << ">" << endl;
        else if (s.size() < s1.size() && s[s.size() - 1] == 'L')
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }
}
int main()
{
    Bappy21();
    return 0;
}
