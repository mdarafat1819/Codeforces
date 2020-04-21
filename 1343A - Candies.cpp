#include <bits/stdc++.h>

using namespace std;

long long int power(int i)
{
    long long int ans = 1;
    while(i--) ans *= 2;
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, sum = 0, ans;
        cin>>n;
        for(int i = 0; ; i++)
        {
            sum += power(i);
            if(!(n % sum)) ans = n / sum;
            if(sum > n) break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
