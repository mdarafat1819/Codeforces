#include <bits/stdc++.h>

using namespace std;

int d(int n, int k)
{
    vector <int> v;
    for(int i = 1; i * i <= n; i++)
    {
        if(!(n % i))
        {
            if(i * i == n) v.push_back(i);
            else
            {
                v.push_back(i);
                v.push_back(n / i);
            }
        }

    }
    sort(v.begin(), v.end());
    for(int i = v.size() - 1; i >= 0; i --)
        if(k >= v[i]) return v[i];
}

int main()
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k >= n) cout<<"1"<<endl;
        else cout<<n / d(n, k)<<endl;;
    }
    return 0;
}
