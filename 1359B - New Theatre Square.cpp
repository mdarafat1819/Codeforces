#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans = 0, n, m, x, y;
        cin>>n>>m>>x>>y;
        for(int i = 0; i < n; i++)
        {
            int cnt = 0;
            string str;
            cin>>str;
            for(int j = 0; j < str.length(); j++)
            {
                if(str[j] == '.') cnt++;
                else
                {
                    ans += min(cnt * x, (cnt / 2) * y + (cnt % 2) * x);
                    cnt=0;
                }
            }
            ans += min(cnt * x, (cnt / 2) * y + (cnt % 2) * x);
        }
        cout<<ans<<endl;
    }
    return 0;
}
