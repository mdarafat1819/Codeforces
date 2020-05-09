#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, k, ans, t_k;
        cin>>n>>k;
        t_k = k;
        while(1)
        {
            ans = k / n;
            if(((t_k + ans) / n) == ans)
            {
                cout<<t_k + ans<<endl;
                break;
            }
            k = t_k + ans;
        }
    }

    return 0;
}
