#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x, y, a, b;
        cin>>x>>y>>a>>b;
        long long int t = (y - x) / (a + b);
        if(t * (a + b) == (y - x)) cout<<t<<endl;
        else cout<<"-1"<<endl;
    }

    return 0;
}
