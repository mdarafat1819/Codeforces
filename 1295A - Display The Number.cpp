#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(!(n % 2))
        {
             n /= 2;
             while(n) cout<<"1", n--;
        }
        else
        {
            cout<<"7";
            n -= 3, n /= 2;
            while(n) cout<<"1", n--;
        }
        cout<<endl;
    }

    return 0;
}
