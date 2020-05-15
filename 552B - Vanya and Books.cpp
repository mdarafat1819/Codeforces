#include <bits/stdc++.h>

using namespace std;

long long int power(int n)
{
    long long int ans = 1;
    for(int i = 1; i <= n; i++) ans *= 10;
    return ans;
}

int main()
{
    long long int n, cnt = 0, term, last = 0, i;
    cin>>n;
    term = log10(n);
    for(i = 1; i <= term; i++)
    {
        cnt += (9 * power(i - 1)) * i;
        last = last * 10 + 9;
    }
    cout<<cnt + ((n - last) * (term + 1))<<endl;
    return 0;
}
