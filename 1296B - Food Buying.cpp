#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s, result = 0;
        cin>>s;
        while(s > 9)
        {
            result += (s / 10) * 10;
            s = (s % 10) + s / 10;
        }
        result += s;
        cout<<result<<endl;
    }
    return 0;
}
