#include <bits/stdc++.h>

using namespace std;

int divisor_count(int n, int x)
{
    int cnt = 0;
    for(int i = 1; i * i <= x; i++)
    {
        if((i * i == x) && i <= n) cnt ++;
        else if(!(x % i) && (i <= n) && ((x / i) <= n)) cnt += 2;
    }
    return cnt;
}

int main()
{
    long long int n, x, cnt = 0, i, j;
    cin>>n>>x;
    cout<<divisor_count(n, x)<<endl;
    return 0;
}
