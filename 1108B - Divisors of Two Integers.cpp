#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, num1 = 0, num2 = 0;
    cin>>n;
    int ara[n];
    for(int i = 0; i < n; i++) cin>>ara[i];
    sort(ara, ara + n);
    num1 = ara[n-1];
    for(int i = 0; i < n - 1; i++)
    {
        if(ara[i] != ara[i+1] && !(num1 % ara[i])) continue;
        num2 = max(num2, ara[i]);
    }
    cout<<num1<<" "<<num2<<endl;
    return 0;
}
