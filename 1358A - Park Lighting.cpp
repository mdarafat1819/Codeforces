#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long row, col, ans;
        cin>>row>>col;
        ans = (col / 2) * row;
        if(col % 2)
        {
            ans += (row / 2);
            if(row % 2) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
