#include <bits/stdc++.h>

using namespace std;

int findMin(int ara[], int n)
{
    sort(ara, ara + n);
    for(int i = 0; ; i++)
        if(ara[i] == ara[i+1]) return ara[i];
}
int main()
{
    int n;
    cin>>n;
    int ara[n], t[n], l, mn = 0, m, flag = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>ara[i];
        t[i] = ara[i];
    }
    m = findMin(t, n);
    for(int i = 0; i < n; i++)
    {
        if(m == ara[i])
        {
            if(!flag) l = i, flag = 1;
            else
            {
                if(!mn) mn = i - l;
                else mn = min(mn, i - l);
                l = i;
            }
        }
    }
    cout<<mn<<endl;
    return 0;
}
