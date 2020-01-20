#include <iostream>

using namespace std;
int length(long long int num)
{
    int c = 0;
    while(num)
    {
        c++;
        num /= 10;
    }
    return c;
}
int prev(int len)
{
    int result = 0, t = 0;
    while(len != t)
    {
        t++;
        int in = 0, last = 0;
        for(int i = 0; i < t; i++)
        {
            in = in * 10 + 1;
            last = last * 10 + 9;
        }
        for(int i = in; i <= last; i += in) result ++;
    }
    return result;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, in = 0;
    cin>>n;
    int len = length(n);
    int result = prev(len - 1);
    for(long long int i = 0; i < len; i++) in = in * 10 + 1;
    for(long long int i = in; i <= n; i += in) result++;
    cout<<result<<endl;
    }

    return 0;
}
