#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    long long sum = 0, sum1 = 0;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        int m, c;
        cin >> m >> c;
        if (m > c)
        {
            sum++;
        }
        else if (m < c)
        {
            sum1++;
        }
    }
    if (sum > sum1)
    {
        cout << "Mishka" << endl;
    }
    else if (sum == sum1)
    {
        cout << "Friendship is magic!^^" << endl;
    }
    else
    {
        cout << "Chris" << endl;
    }
}