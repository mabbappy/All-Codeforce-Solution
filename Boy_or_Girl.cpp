#include <bits/stdc++.h>
using namespace std;
int main()
{
//Bismilla Hir Rahmanir Rahim
//Assalatu Assalamualika Ya Rasool-Allah!
//Rahman Zahagir Vorosa!
//mabbappy
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    string  s;
    cin>>s;
    set<char>s1;
    for(int i=0;i<s.size();i++)
    {
        s1.insert(s[i]);
    }
     if(s1.size()%2==0)
     {
        cout<<"CHAT WITH HER!"<<endl;
     }
     else
     {
        cout<<"IGNORE HIM!"<<endl;
     }
return 0;
}