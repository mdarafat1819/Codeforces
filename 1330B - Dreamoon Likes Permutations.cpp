#include <bits/stdc++.h>

using namespace std;

void judge(int arr[], bool left[], int n)
{
    bool marked[200001] = {false};
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] < i && (!marked[arr[i]])) cnt++;
        marked[arr[i]] = 1;
        if(marked[i]) cnt++;
        if(i == cnt) left[i] = 1;
    }
}

int main()
{
    int t, n, arr[200001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i = 1; i <= n; i++) cin>>arr[i];
        bool left[200001] = {0}, right[200001] = {0};
        vector <int> l, r;
        judge(arr, left, n);
        reverse(arr + 1, arr + n + 1);
        judge(arr, right, n);
        for(int i = 1; i <= n; i++)
        {
            if(left[i] && right[n - i])
            {
                l.push_back(i);
                r.push_back(n - i);
            }
        }
        cout<<l.size()<<endl;
        for(int i = 0; i < l.size(); i++)
            cout<<l[i]<<" "<<r[i]<<endl;
    }
    return 0;
}
