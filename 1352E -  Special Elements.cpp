#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n], sum[8001] = {0}, ans = 0;
        for(int i = 0; i < n; i++) cin>>arr[i];
        for(int i = 0; i < n; i++)
        {
            int s = arr[i];
            for(int j = i + 1; j < n; j++)
            {
                s += arr[j];
                if(s <= 8000) sum[s] = 1;
            }
        }
        for(int i = 0; i < n; i++)
            ans += sum[arr[i]];
        cout<<ans<<endl;
    }

    return 0;
}

/*#include <bits/stdc++.h>

using namespace std;

bool left(int arr[], int n, int idx)
{
    int cnt = 0, start = 0, sum = 0;
    if(idx < 2) return 0;
    for(int i = 0; i < idx; i++)
    {
        cnt++, sum += arr[i];
        if(sum == arr[idx] && cnt >= 2) return 1;
        while(sum > arr[idx])
        {
            sum -= arr[start], start++, cnt--;
            if(sum == arr[idx] && cnt >= 2) return 1;
        }
    }
    return 0;
}

bool right(int arr[], int n, int idx)
{
    int start = idx + 1, cnt = 0, sum = 0;
    if((n - idx) < 2) return 0;
    for(int i = start; i < n; i++)
    {
        sum += arr[i], cnt++;
        if(sum == arr[idx] && cnt >= 2) return 1;
        while(sum > arr[idx])
        {
            sum -= arr[start], start++, cnt--;
            if(sum == arr[idx] && cnt >= 2) return 1;
        }
    }
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n], cnt = 0;
        for(int i = 0; i < n; i++) cin>>arr[i];
        for(int i = 0; i < n; i++)
            if(left(arr, n, i) || right(arr, n, i)) cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}*/
