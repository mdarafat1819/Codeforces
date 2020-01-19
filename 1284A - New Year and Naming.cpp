#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int first, second, q, year;
    cin>>first>>second;
    //cin>>ws;
    string f[first+1], s[second + 1];
    for(int i = 0; i < first; i++) cin>>f[i];
    for(int i =  0; i < second; i++) cin>>s[i];
    cin>>q;
    while(q--)
    {
        cin>>year;
        year--;
        int idx1, idx2;
        idx1 = year % (first);
        idx2 = year % (second);
        cout<<f[idx1] + s[idx2]<<endl;
    }

    return 0;
}
