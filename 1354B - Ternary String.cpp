#include <bits/stdc++.h>

using namespace std;

int max3(int a, int b, int c)
{
    return max(a, max(b, c));
}
int min3(int a, int b, int c)
{
    return min(a, min(b, c));
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int one = 0, two = 0, three = 0, n = str.length();
        int ans = n;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '1') one = i + 1;
            if(str[i] == '2') two = i + 1;
            if(str[i] == '3') three = i + 1;
            if(one && two && three)
            ans = min(ans, (max3(one, two, three)) - min3(one, two, three));
        }
        if(ans == n) cout<<"0"<<endl;
        else cout<<ans + 1<<endl;
    }
    return 0;
}
