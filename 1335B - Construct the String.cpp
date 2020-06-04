#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        string str;
        char ch = 'a';
        while(1)
        {
            int flag = 0;
            for(int i = 0; i < b; i++)
            {
                str.push_back(ch + i);
                if(str.length() == n)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag) break;
        }
        cout<<str<<endl;
    }

    return 0;
}
