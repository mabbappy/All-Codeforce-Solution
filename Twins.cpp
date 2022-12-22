#include <bits/stdc++.h>

using namespace std;

int num, sum = 0, a = 0, i, j;

int main()
{
    cin >> num;
    i = num - 1;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + num);
    while (a <= sum / 2)
    {
        a += arr[i];
        i--;
        j++;
    }
    cout << j;
    return 0;
}
