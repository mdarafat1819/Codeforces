#include <iostream>

using namespace std;

int interesting(int n)
{
    int sum = 0;
    while(n)
    {
        sum += (n % 10);
        n /= 10;
    }
    if(!(sum % 4)) return 1;
    return 0;
}
int main()
{
    int a;
    cin>>a;
    for(int i = a; ;i++)
    {
        if(interesting(i))
        {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
