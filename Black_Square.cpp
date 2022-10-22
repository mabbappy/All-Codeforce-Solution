/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for (int i = 1; i <= 4; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += a[s[i] - '0'];
    }
    cout << sum << endl;
}*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            sum += a;
        }
        else if (s[i] == '2')
        {
            sum += b;
        }
        else if (s[i] == '3')
        {
            sum += c;
        }
        else if (s[i] == '4')
        {
            sum += d;
        }
    }
    cout << sum << endl;
}