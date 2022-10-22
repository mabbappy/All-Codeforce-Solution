#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    cout << num / 100 + num % 100 / 20 + num % 20 / 10 + num % 10 / 5 + num % 5;
    return 0;
}