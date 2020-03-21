#include <iostream>

using namespace std;

int main()
{
    int mn = 0, a, b, c;
    cin>>a>>b>>c;
    mn = min(a, b);
    mn = min(mn, c);
    a = mn;
    if((a + 1) <= b) b = a + 1;
    else a--;
    if((b + 1) <= c) c = b + 1;
    else
    {
        a = c - 2;
        b = c - 1;
    }
    cout<<a + b + c<<endl;
    return 0;
}
