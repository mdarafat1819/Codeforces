/*#include <bits/stdc++.h>

using namespace std;

int possible(int n)
{
    for(int i = 1; ; i++)
    {
        int need = (i - 1) + i * 2;
        if(n >= need) n -= need;
        else return n;
    }
}

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int cnt = 0;
        while(n > 1) n = possible(n), cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}*/
#include <bits/stdc++.h>

using namespace std;

int possible(long long n)
{
    long long h = (-1 + sqrt(1 + 24 * n))  / 6;
    return n - (h * (4 + (h - 1) * 3)) / 2;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, cnt = 0;
        cin>>n;
        while(n > 1) n = possible(n), cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
