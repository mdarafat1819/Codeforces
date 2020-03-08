#include <iostream>

using namespace std;

int main()
{
    int n, k, x;
    cin>>n>>k;
    x = (n / k) * k;
    if(x <= n) x += k;
    cout<<x<<endl;

    return 0;
}
