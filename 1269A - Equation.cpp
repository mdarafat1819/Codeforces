#include <iostream>

using namespace std;

int noComposit(int n)
{
    if(n <= 2) return 1;
    if(!(n % 2)) return 0;
    for(int i = 3; i * i <= n; i += 2)
        if(!(n % i)) return 0;
    return 1;
}
int main()
{
    int n, a, b = 20;
    cin>>n;
    a = n + b;
    if(noComposit(a))
    {
        a++;
        b++;
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}
