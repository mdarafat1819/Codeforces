#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, rmx, rmn, pmx, pmn, n, a, b, c, d;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        rmn = a - b;
        rmx = a + b;
        pmn = c - d;
        pmx = c + d;
        if(n * rmn > pmx || rmx * n < pmn) cout<<"No"<<endl;
        else if((n * rmn >= pmn) && (n * rmn <= pmx)) cout<<"Yes"<<endl;
        else
        {
            int need = pmn / n;
            if(need >= rmn && need <= rmx) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
