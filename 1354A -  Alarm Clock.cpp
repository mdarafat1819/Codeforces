#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a, b, c, d;
        cin>>a>>b>>c>>d;
        if(a <= b) cout<<b<<endl;
        else if(c <= d) cout<<"-1"<<endl;
        else
        {
           long long need = a - b;
           long long dif = c - d;
           long long temp = (need / dif) * dif;
           if(temp < need) temp += dif;
           cout<<(temp / dif) * c + b<<endl;
        }
    }
    return 0;
}
