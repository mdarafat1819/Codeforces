#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, dif, mn = 0, mx = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    sort(arr, arr + n);
    dif = arr[n - 1] - arr[0];
    for(int i = 0; i < n; i++) if(arr[0] == arr[i]) mn++;
    for(int i = 0; i < n; i++) if(arr[n - 1] == arr[i]) mx++;
    if(arr[0] == arr[n-1]) cout<<dif<<" "<<(n * (n - 1)) / 2 <<endl;
    else cout<<dif<<" "<<mx * mn<<endl;
    return 0;
}
