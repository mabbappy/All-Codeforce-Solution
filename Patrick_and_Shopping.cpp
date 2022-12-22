/*
**author:mabbappy
**date:22 Nov,22
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int d1, d2, d3, da, db, dc, dd;
    cin >> d1 >> d2 >> d3;
    da = (d1 + d2) * 2;
    db = d1 + d2 + d3;
    dc = (d2 + d3) * 2;
    dd = (d1 + d3) * 2;
    cout << min(min(min(da, db), dc), dd);
}