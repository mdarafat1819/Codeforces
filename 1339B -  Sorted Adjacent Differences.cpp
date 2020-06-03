#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n], res[n], idx = 0;
        for(int i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr + n);
        for(int i = 0; i <= n / 2; i++)
        {
            res[idx++] = arr[n - i - 1];
            res[idx++] = arr[i];
        }
        for(int i = n - 1; i >= 0; i--) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}
