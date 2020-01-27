#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3], n, sum = 0;
        for(int i = 0; i < 3; i++) cin>>a[i];
        cin>>n;
        sort(a, a + 3);
        n -= (a[2] - a[0]) + (a[2] - a[1]);
        if(n>=0 && !(n % 3)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
