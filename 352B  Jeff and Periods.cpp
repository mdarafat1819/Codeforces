#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, input;
    cin>>n;
    vector <int> v[100001], ans, va;
    for(int i = 0; i < n; i++)
    {
        cin>>input;
        v[input].push_back(i);
    }
    for(int i = 1; i < 100001; i++)
    {
        if(v[i].size() == 1)
        {
            ans.push_back(0);
            va.push_back(i);
        }
        else if(v[i].size() == 2)
        {
            ans.push_back(v[i][1] - v[i][0]);
            va.push_back(i);
        }
        else if(v[i].size() > 2)
        {
            int dif = v[i][1] - v[i][0], flag = 0;
            for(int j = 2; j < v[i].size(); j++)
            {
                if(dif != (v[i][j] - v[i][j-1]))
                {
                    flag = 1;
                    break;
                }
            }
            if(!flag)
            {
                ans.push_back(dif);
                va.push_back(i);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i = 0; i < ans.size(); i++) cout<<va[i]<<" "<<ans[i]<<endl;
    return 0;
}
