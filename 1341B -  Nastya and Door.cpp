#include <bits/stdc++.h>

#define SIZE 200001

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans = 0, left = 1, n, k;
        cin>>n>>k;
        int arr[n + 1], seg[n + 1] = {0};
        for(int i = 1; i <= n; i++) cin>>arr[i];
        for(int i = 2; i < n; i++)
            if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) seg[i]++;
        for(int i = 1; i <= n; i++) seg[i] += seg[i - 1];
        int j = k;
        for(int i = 1; i <= (n - k + 1); i++)
        {
            int cnt = seg[j - 1] - seg[i];
            if(ans < cnt)
            {
                ans = cnt;
                left = i;
            }
            j++;
        }
        cout<<ans + 1<<" "<<left<<endl;
    }
    return 0;
}
