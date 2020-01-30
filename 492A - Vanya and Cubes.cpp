#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin>>n;
    for(i = 1; ; i++)
    {
        int cubes = (i * (i - 1)) / 2 + i;
        n = n - cubes;
        if(n < 0)
        {
            i--;
            break;
        }
    }
    cout<<i<<endl;

    return 0;
}
