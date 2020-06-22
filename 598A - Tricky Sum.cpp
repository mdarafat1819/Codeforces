#include <bits/stdc++.h>

using namespace std;

long long sum(long long n)
{
    long long v = 1, ans = 1;
    while(2 * v <= n)
    {
        v *= 2;
        ans += v;
    }
    return ans;
}

int main()
{
    long long t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long s = (n * (n + 1)) / 2;
        cout<<s - 2 * sum(n)<<endl;
    }
    return 0;
}
