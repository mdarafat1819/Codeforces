#include <bits/stdc++.h>

using namespace std;

long long solve(long long n)
{
    int mn = n % 10, mx = n % 10;
    while(n)
    {
        int rem = n % 10;
        mn = min(mn, rem);
        mx = max(mx, rem);
        if(!mn) return 0;
        n /= 10;
    }
    return mn * mx;
}

int main()
{
    long long t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        while(k > 1)
        {
            long long v = solve(n);
            if(!v) break;
            n += v;
            k--;
        }
        cout<<n<<endl;
    }
    return 0;
}
