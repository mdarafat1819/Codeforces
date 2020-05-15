#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n], move = 0, a = 0, b = 0, prev = 0, left = 0, right = n - 1;
        for(int i = 0; i < n; i++) cin>>arr[i];
        while(left <= right)
        {
            int sum = 0;
            for(int i = left; i <= right; i++)
            {
                 sum += arr[i];
                if(sum > prev || (i == right))
                {
                    a += sum;
                    left = i + 1;
                    prev = sum;
                    move++;
                    break;
                }
            }
            sum = 0;
            for(int i = right; i >= left; i--)
            {
                sum += arr[i];
                if(sum > prev || (i == left))
                {
                    b += sum;
                    right = i - 1;
                    prev = sum;
                    move++;
                    break;
                }
            }
        }
        cout<<move<<" "<<a<<" "<<b<<endl;
    }
    return 0;
}
