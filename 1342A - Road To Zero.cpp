#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, x, y, a, b, ans, mx, mn;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        cin>>a>>b;
        mx = max(x, y);
        mn = min(x, y);
        ans = (mx - mn) * a;
        ans += min(mn * b, 2 * mn * a);
        cout<<ans<<endl;
    }
    return 0;
}
