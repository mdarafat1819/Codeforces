#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int p_p = 0, p_c = 0, p, c, ans = 1;
        for(int i = 0; i < n; i++)
        {
            cin>>p>>c;
            if((p - p_p) < 0 || (c - p_c < 0) || ((p - p_p) < (c - p_c))) ans = 0;
            p_p = p;
            p_c = c;
        }
        if(ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
