#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int way = 0, n;
    cin>>n;
    if(!(n % 2)) way = pow(2, (n / 2));
    cout<<way<<endl;

    return 0;
}
