#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector <int> divisor(int n)
{
    vector <int> d;
    for(int i = 1; i * i <= n; i++)
    {
        if(i * i == n) d.push_back(i);
        else if(!(n % i))
        {
            d.push_back(i);
            d.push_back(n / i);
        }
    }
    return d;
}

bool isAlmostPrime(int n)
{
    int d = 0, cnt = 0;
    while(n)
    {
        int rem = n % 10;
        if(rem == 4 || rem == 7) cnt ++;
        n /= 10;
        d++;
    }
    if(d == cnt) return 1;
    return 0;
}
int main()
{
    int n, flag = 0;
    cin>>n;
    vector <int> div;
    div = divisor(n);
    for(int i = 0; i < div.size(); i++)
    {
        if(isAlmostPrime(div[i]))
        {
            flag = 1;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
