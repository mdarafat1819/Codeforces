#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, x, y, first, second, third, fourth;
        cin>>a>>b>>x>>y;
        x++;
        y++;
        first = (b - y) * a;
        second = (a - x) * b;
        third = a * (y - 1);
        fourth = b * (x - 1);
        first = max(first, second);
        third = max(third, fourth);
        cout<<max(first, third)<<endl;
    }

    return 0;
}
