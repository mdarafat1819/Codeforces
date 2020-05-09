#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t, n, k, sqr;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        sqr = k * k;
        if(sqr <= n)
        {
            if(sqr == n) cout<<"YES"<<endl;
            else if( (n - (k-1) * (k-1)) % 2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
