#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long ans = 0, sum = 0, i;
        for(i = 1; i <= n / 2; i++) sum += i * i;
        cout<<8 * sum<<endl;
    }


    return 0;
}
