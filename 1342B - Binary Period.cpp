#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str, ans = "10";
        cin>>str;
        int one = 0, zero = 0, len = str.length();
        for(int i = 0; i < len; i++)
        {
            if(str[i] == '0') zero++;
            else one++;
        }
        if(!one || !zero)
        {
            cout<<str<<endl;
            continue;
        }
        for(int i = 1; i <= len; i++)
            cout<<ans;
        cout<<endl;
    }
    return 0;
}
