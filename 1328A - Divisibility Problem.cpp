#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, t;
        cin>>a>>b;
        t = (a / b) * b;
        if(t < a) t += b;
        cout<<t - a<<endl;
    }
    return 0;
}
