#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        vector <int> res;
        cin>>n;
        int i = 1;
        while(n)
        {
            int rem = n % 10;
            if(rem * i) res.push_back(rem * i);
            n /= 10;
            i *= 10;
        }
        cout<<res.size()<<endl;
        for(int i = 0; i < res.size(); i++) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}
