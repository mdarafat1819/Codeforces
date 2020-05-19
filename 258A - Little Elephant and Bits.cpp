#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str, ans;
    cin>>str;
    bool chk = false;
    for(int i = 0; i < str.length(); i++)
    {
        if(chk == false && str[i] == '0')
        {
            chk = true;
            continue;
        }
        ans.push_back(str[i]);
    }
    if(chk == false) ans.resize(ans.size() - 1);
    cout<<ans<<endl;
    return 0;
}
