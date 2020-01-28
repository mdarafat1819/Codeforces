#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int siz, cx = 0, cy = 0, cnt = 0;
        string result;
        cin>>siz;
        vector<pair<int,int> >v;
        int x[siz], y[siz];
        for(int i = 0; i < siz; i++) cin>>x[i]>>y[i];

        for (int i = 0; i < siz; i++)
		v.push_back( make_pair(x[i],y[i]) );
        sort(v.begin(), v.end());

        for(int i = 0; i < siz; i++)
        {
            if(v[i].second >= cy)
            {
                cnt++;
                for(int j = cx; j < v[i].first; j++) result.push_back('R');
                cx = v[i].first;
                for(int j = cy; j < v[i].second; j++) result.push_back('U');
                cy = v[i].second;
            }
        }
        if(cnt == siz) cout<<"YES\n"<<result<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
