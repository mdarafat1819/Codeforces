#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr, arr + 3);
        if((arr[0] + arr[1]) <= arr[2]) cout<<arr[0] + arr[1]<<endl;
        else cout<<(arr[0] + arr[1] + arr[2]) / 2 <<endl;
    }
    return 0;
}
