#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, p1, p2, p3;
    cin>>a>>b>>c;
    p1 = abs(a - b) + abs(a - c);
    p2 = abs(b - a) + abs(b - c);
    p3 = abs(c - a) + abs(c - b);
    cout<<min(min(p1, p2), p3)<<endl;

    return 0;
}
