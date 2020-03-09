#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, z;
    cin>>x>>y>>z;
    if(x == y && !z) cout<<"0"<<endl;
    else if((x + z) > y && x > (y + z)) cout<<"+"<<endl;
    else if((x + z) < y && x < (y + z)) cout<<"-"<<endl;
    else cout<<"?"<<endl;
    return 0;
}
