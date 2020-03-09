#include <iostream>

using namespace std;

int isPrime(int n)
{
    if(!(n % 2)) return 0;
    for(int i = 3; i * i <= n; i += 2)
        if(!(n % i)) return 0;
    return 1;
}
int main()
{
    int n, x, y;
    cin>>n;
    if(!(n % 2))
    {
        x = n / 2;
        y = n - x;
        if(x == y)
        {
            x--;
            y++;
        }
    }
    else
    {
        x = n / 2;
        y = x + 1;
    }
    while(isPrime(x) || isPrime(y))
    {
        x--;
        y++;
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
