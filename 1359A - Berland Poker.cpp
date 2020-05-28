#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int need, n, m, k, rem;
        cin>>n>>m>>k;
        need = n / k;
        if(need >= m) cout<<m<<endl;
        else
        {
            m -= need;
            rem = m / (k - 1);
            if((m % (k - 1))) rem++;
            cout<<abs(need - rem)<<endl;
        }
    }
    return 0;
}
