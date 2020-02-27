#include <iostream>

using namespace std;

long long int gcd(long long a, long long b)
{
    return !b ? a : gcd(b, a % b);
}
int main()
{
    long long int a, b, x, y, g;
    cin>>a>>b>>x>>y;
    g = gcd(x, y);
    x = x / g;
    y = y / g;
    cout<<min(a / x, b / y)<<endl;
    return 0;
}
