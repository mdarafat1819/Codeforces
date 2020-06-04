#include <bits/stdc++.h>

#define SIZE 200001

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int freq[SIZE] = {0}, dis = 0, mx = 0, input, n;
        cin>>n;
        for(int i = 0; i < n; i++)
        {
            cin>>input;
            freq[input]++;
        }
        for(int i = 1; i < SIZE; i++)
        {
            mx = max(mx, freq[i]);
            if(freq[i]) dis++;
        }
        if(mx == 1 && dis > 1) cout<<"1"<<endl;
        else if(mx < dis) cout<<mx<<endl;
        else cout<<min(dis, mx - 1)<<endl;
    }
    return 0;
}
