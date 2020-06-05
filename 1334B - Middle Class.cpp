#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, n, arr[100001], x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int i = n - 1, ans = 0;
        for(int i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr + n);
        for(int i = n - 2; i >= 0; i--) arr[i] += arr[i + 1];
        for(int i = n - 1; i >= 0; i--)
            if((arr[i] / (n - i)) >= x) ans = n - i;
        cout<<ans<<endl;
    }
    return 0;
}
