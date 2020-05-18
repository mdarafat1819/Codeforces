#include <bits/stdc++.h>

using namespace std;

struct dragon
{
    int a, b;
};

bool cmp(struct dragon A, struct dragon B)
{
    return B.a > A.a;
}
int main()
{
    int s, n;
    cin>>s>>n;
    struct dragon d[n];
    for(int i = 0; i < n; i++) cin>>d[i].a>>d[i].b;
    sort(d, d + n, cmp);
    for(int i = 0; i < n; i++)
    {
        if(s > d[i].a) s += d[i].b;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
