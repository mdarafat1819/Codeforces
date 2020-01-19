#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector <int> digit(int n)
{
    vector <int> d;
    while(n)
    {
        d.push_back(n % 10);
        n /= 10;
    }
    return d;
}
int notSame(vector <int> n)
{
    for(int i = 0; i < n.size() - 1; i++)
    {
        if(n[i] == n[i + 1]) return 0;
    }
    return 1;
}

int main()
{
    int l, r;
    cin>>l>>r;
    for(int i = l; i <= r; i++)
    {
        vector <int> d = digit(i);
        sort(d.begin(), d.end());
        if(notSame(d))
        {
            cout<<i<<endl;
            return 0;
        }

    }
    cout<<-1<<endl;

    return 0;
}
