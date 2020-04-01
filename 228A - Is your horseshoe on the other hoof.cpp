#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ara[4], cnt = 1;
    for(int i = 0; i < 4; i++) cin>>ara[i];
    sort(ara, ara + 4);
    for(int i = 0; i < 3; i++)
        if(ara[i] != ara[i+1]) cnt++;
    cout<<4 - cnt<<endl;
    return 0;
}
