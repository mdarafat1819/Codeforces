#include <bits/stdc++.h>

using namespace std;

struct Road
{
    int u, v;
    void print()
    {
        cout<<u<<" "<<v<<endl;
    }
};

void solve()
{
    vector<Road> ans;
    int n, *a, idx = 0;
    cin>>n;
    a = (int*)malloc(sizeof(int) * (n + 1));
    cin>>a[1];
    for(int i = 2; i <= n; i++)
    {
        cin>>a[i];
        if(a[i] != a[1]) ans.push_back({1, i}), idx = i;
    }
    if(!idx) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i = 2; i <= n; i++)
            if(a[1] == a[i]) ans.push_back({idx, i});
        for(int i = 0; i < ans.size(); i++) ans[i].print();
    }
    free(a);

}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--) solve();
    //int i = 1; while(i <= t) cout<<"Case "<<i++<<": "<<endl, solve();
    //solve();

    return 0;
}

