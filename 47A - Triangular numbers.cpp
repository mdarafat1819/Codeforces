#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = (sqrt(1 + 8 * n) - 1) / 2;
    if(n == ((a * (a + 1)) / 2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
