#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, sum = 0, mx = 0;
    cin>>n;
    long long int ara[n];
    for(int i = 0; i < n; i++)
    {
        cin>>ara[i];
        sum += ara[i];
        mx = max(mx, ara[i]);
    }
    for(long long int i = mx; ; i++)
    {
        if(((n * i) - sum) >= i)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
