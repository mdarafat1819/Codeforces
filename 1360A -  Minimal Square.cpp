#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, mx, mn;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        mx = max(a, b);
        mn = min(a, b);
        if(mn * 2 >= mx) cout<< 4 * mn * mn<<endl;
        else cout<<mx * mx<<endl;
    }
    return 0;
}
