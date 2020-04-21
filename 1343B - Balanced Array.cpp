#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum_odd = 0, sum_even = 0;
        vector <int> v;
        cin>>n;
        n /= 2;
        if(n % 2) cout<<"NO"<<endl;
        else
        {
            for(int i = 1, j = 2; i <= n; i++, j += 2)
                v.push_back(j), sum_even += j;
            for(int i = 1, j = 1; i < n; i++, j += 2)
                v.push_back(j), sum_odd += j;
            v.push_back(sum_even - sum_odd);
            cout<<"YES"<<endl;
            for(int i = 0; i < v.size(); i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
