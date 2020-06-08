#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, arr[500];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int flag = 1, input = 0, one = 0, zero = 0;
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(input > arr[i]) flag = 0;
            input = arr[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin>>input;
            input ? one++ : zero++;
        }
        if(one && zero || flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
