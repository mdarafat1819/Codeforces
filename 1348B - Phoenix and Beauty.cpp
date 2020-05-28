#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr[101] = {0}, input;
        vector <int> v;
        for(int i = 0; i < n; i++)
        {
            cin>>input;
            arr[input]++;
        }
        for(int i = 1; i < 101; i++) if(arr[i]) v.push_back(i);
        if(v.size() > k)
        {
            cout<<"-1"<<endl;
            continue;
        }
        for(int i = 1; ; i++)
        {
            if(v.size() == k) break;
            if(arr[i] == 0) v.push_back(i);
        }
        sort(v.begin(), v.end());
        cout<<n * v.size()<<endl;
        while(n--)
        {
            for(int i = 0; i < v.size(); i++) cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
