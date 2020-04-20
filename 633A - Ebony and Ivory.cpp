#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, need;
    cin>>a>>b>>c;
    for(int i = 0; i <= c; i++)
    {
        need = c - a * i;
        if(need >= 0 && !(need % b))
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
