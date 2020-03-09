#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cs;
    cin>>cs;
    while(cs--)
    {
        int s;
        cin>>s;
        int ara[s];
        for(int i = 0; i < s; i++) cin>>ara[i];
        sort(ara, ara + s, greater<int>());
        for(int i = 0; i < s; i++)
            cout<<ara[i]<<" ";
        cout<<endl;
    }

    return 0;
}
