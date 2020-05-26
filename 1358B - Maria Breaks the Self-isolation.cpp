#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n], total = 1;
        for(int i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr + n);
        for(int i = n - 1; i >= 0; i--)
        {
            if(arr[i] <= (i + 1))
            {
                total = i + 2;
                break;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
