#include <bits/stdc++.h>

using namespace std;

int b_search(int ara[], int n, int t)
{
    int ans = 0, l, r, mid;
    for(int i = 1; i <= n; i++)
    {
        l = i, r = n;
        while(l <= r)
        {
            mid = l + (r - l) / 2;
            if((ara[mid] - ara[i-1]) <= t) l = mid + 1;
            else r = mid - 1;
        }
        ans = max(ans, l - i);
    }
    return ans;
}

int main()
{
    int n, t;
    cin>>n>>t;
    int ara[n+1] = {0};
    for(int i = 1; i <= n; i++) cin>>ara[i];
    for(int i = 1; i <= n; i++) ara[i] = ara[i] + ara[i-1];
    cout<<b_search(ara, n, t)<<endl;
    return 0;
}
