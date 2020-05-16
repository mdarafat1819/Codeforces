/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n], mx = 0, prev = 0;
        for(int i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr + n);
        for(int i = 0; i < n; i++)
        {
            int chk = i + arr[i] - 1 - prev;
            if(arr[i] >= arr[chk] && (chk < n) && chk >=0)
                mx++, i = chk, prev = 0;
            else prev++;
        }
        cout<<mx<<endl;
    }
    return 0;
}*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n], cnt = 0, ans = 0;
        for(int i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr + n);
        for(int i = 0; i < n; i++)
        {
            cnt++;
            if(arr[i] == cnt) ans++, cnt = 0;
        }
        cout<<ans<<endl;
    }
    return 0;
}
