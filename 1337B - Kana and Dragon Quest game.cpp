#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, n, m;
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>m;
        while(n && (x / 2 + 10) < x)
        {
            x = x / 2 + 10;
            n--;
        }
        x -= 10 * m;
        if(x <= 0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

    return 0;
}
