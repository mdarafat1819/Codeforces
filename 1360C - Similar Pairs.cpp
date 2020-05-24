#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, odd = 0, even = 0, cnt = 1, arr[50];
        cin>>n;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(!(arr[i] % 2)) even++;
            else odd++;
        }
        if(!(odd % 2) && !(even % 2)) cout<<"YES"<<endl;
        else
        {
            sort(arr, arr + n);
            for(int i = 1; i < n; i++) if(arr[i] - arr[i - 1] == 1) cnt++;
            if(cnt >= 2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
