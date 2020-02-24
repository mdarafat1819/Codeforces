#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, res = 0, one = 0, two = 0;
    cin>>n;
    vector <int> pos;
    int ara[n + 1];
    ara[n] = 0;
    for(int i = 0; i < n; i++) cin>>ara[i];
    for(int i = 0; i < n; i++)
    {
        if(ara[i] == 1)
        {
            one++;
            if(ara[i + 1] == 2 || ara[i + 1] == 0)
            {
                pos.push_back(one);
                one = 0;
            }
        }
        else
        {
            two++;
            if(ara[i + 1] == 1 || ara[i + 1] == 0)
            {
                pos.push_back(two);
                two = 0;
            }
        }
    }
    for(int i = 0; i < pos.size() - 1; i++)
    {
        int temp = min(pos[i], pos[i + 1]);
        res = max(temp, res);
    }
    cout<<2 * res<<endl;

    return 0;
}
