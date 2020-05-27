#include <bits/stdc++.h>

using namespace std;

int main()
{
    int coins[31], n, t;
    coins[1] = 2;
    for(int i = 2; i < 31; i++) coins[i] = coins[i - 1] * 2;
    cin>>t;
    while(t--)
    {
        long long a = 0, b = 0;
        cin>>n;
        for(int i = 1; i < n / 2; i++) a += coins[i];
        a += coins[n];
        for(int i = n / 2; i < n; i++) b += coins[i];
        cout<<abs(a - b)<<endl;
    }
    return 0;
}
