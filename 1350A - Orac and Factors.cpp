#include <bits/stdc++.h>

using namespace std;

int small_divisor(int n)
{
    for(int i = 2; i * i <= n; i++)
        if(!(n % i)) return i;
    return n;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, k;
        cin>>n>>k;
        if(!(n % 2)) n += (2 * k);
        else n += (small_divisor(n) + (2 * (k - 1)));
        cout<<n<<endl;
    }
    return 0;
}
