#include <iostream>

using namespace std;

int main()
{
   long long int k, r;
    cin>>k>>r;
    for(int i = 1; ;i++)
    {
        if(!((k * i - r) % 10) || !((k * i) % 10))
        {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
