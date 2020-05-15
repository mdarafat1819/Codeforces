#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if((!(n % 2)) && (!(k % 2)))
        {
            if((k - 1) * 2 < n)
            {
                cout<<"YES"<<endl;
                for(int i = 1; i < k; i++) cout<<"2 ";
                cout<<n - 2 * (k - 1)<<endl;
                continue;
            }
            else if((k - 1) < n)
            {
                cout<<"YES"<<endl;
                for(int i = 1; i < k; i++) cout<<"1 ";
                cout<<n - (k - 1)<<endl;
                continue;
            }
        }
        else if(!(n % 2) && (k % 2))
        {
            if((k - 1) * 2 < n)
            {
                cout<<"YES"<<endl;
                for(int i = 1;  i < k; i++) cout<<"2 ";
                cout<<n - (k - 1) * 2<<endl;
                continue;
            }
        }
        else if((n % 2) && (k % 2))
        {
            if((k - 1) < n)
            {
                cout<<"YES"<<endl;
                for(int i = 1; i < k; i++) cout<<"1 ";
                cout<<n - (k - 1)<<endl;
                continue;
            }
        }
       cout<<"NO"<<endl;
    }
    return 0;
}
