#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, i;
    int arr[5];
    cin >> a >> b >> c;
    arr[0] = a + (b * c);
    arr[1] = a * (b + c);
    arr[2] = a * b * c;
    arr[3] = (a + b) * c;
    arr[4] = a + b + c;
    int max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
}