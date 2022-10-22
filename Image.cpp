#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef int B;
int main()
{
    B tt;
    cin >> tt;
    while (tt--)
    {
        char a, b, c, d;
        cin >> a >> b >> c >> d;
        map<char, int> m;
        m[a]++;
        m[b]++;
        m[c]++;
        m[d]++;
        cout << m.size() - 1 << endl;
    }
}