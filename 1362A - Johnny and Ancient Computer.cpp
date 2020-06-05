#include <bits/stdc++.h>

using namespace std;

int solve(long long n)
{
    int cnt = 0;
    while(!(n % 8)) n /= 8, cnt++;
    while(!(n % 4)) n /= 4, cnt++;
    while(!(n % 2)) n /= 2, cnt++;
    if(n == 1) return cnt;
    return -1;
}

int main()
{
    long long t, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a > b) swap(a, b);
        b % a ? cout<<"-1"<<endl : cout<<solve(b / a)<<endl;
    }
    return 0;
}
