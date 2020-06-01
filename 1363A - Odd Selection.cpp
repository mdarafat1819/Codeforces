#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, odd = 0, even = 0, flag = 0, input;
        cin>>n>>k;
        for(int i = 0; i < n; i++)
        {
            cin>>input;
            input % 2 ? odd++ : even++;
        }
        for(int i = 1; i <= odd && i <= k; i += 2)
            if((k - i) <= even) flag = 1;
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
