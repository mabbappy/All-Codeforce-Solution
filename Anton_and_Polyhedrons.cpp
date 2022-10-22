#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int tt;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
    cin >> tt;
    while (tt--)
    {
        cin >> s;
        int x = s.size();
        if (s == "Tetrahedron")
        {
            sum1 += 4;
        }
        else if (s == "Cube")
        {
            sum2 += 6;
        }
        else if (s == "Octahedron")
        {
            sum3 += 8;
        }
        else if (s == "Dodecahedron")
        {
            sum4 += 12;
        }
        else if (s == "Icosahedron")
        {
            sum5 += 20;
        }
    }
    cout << sum1 + sum2 + sum3 + sum4 + sum5;
}