#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long int gcd(long long int a, long long int b)
{
    return !b ? a : gcd(b, a % b);
}
long long int divisors(long long int n)
{
    long long int res = 0;
    for(long long int i = 1; i  * i <= n; i++)
    {
        if(i * i == n) res++;
        else if(!(n % i)) res += 2;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    long long int ara[n], g, res = 0;
    for(int i = 0; i < n; i++) cin>>ara[i];
    if(n == 1) g = ara[0];
    else
    {
        g = gcd(ara[0], ara[1]);
        for(int i = 2; i < n; i++)
        {
            g = gcd(g, ara[i]);
        }
    }
    cout<<divisors(g)<<endl;

    return 0;
}
