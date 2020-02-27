#include <iostream>

using namespace std;

long long int zeroRemover(long long int num)
{
    long long int res = 0;
    while(num)
    {
        if((num % 10))
        res = res * 10 + (num % 10);
        num /= 10;
    }
    return res;
}
int main()
{
    long long int a, b, c;
    cin>>a>>b;
    c = a + b;
    c = zeroRemover(zeroRemover(c));
    a = zeroRemover(zeroRemover(a));
    b = zeroRemover(zeroRemover(b));
    if(a + b == c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
