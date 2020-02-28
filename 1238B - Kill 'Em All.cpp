#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n, r, cnt = 0, rtemp = 0;
        cin>>n>>r;
        int monstar[n];
        for(int i = 0; i < n; i++) cin>>monstar[i];
        sort(monstar, monstar + n);
        for(int i = n - 1; i >= 0; i--)
        {
            if(monstar[i] && (monstar[i] != monstar[i-1]))
            {
                monstar[i] -= rtemp;
                if(monstar[i] > 0)cnt++;
                rtemp += r;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
