/*#include <bits/stdc++.h>

using namespace std;

int find_min(int arr[], int n)
{
    int idx = 0;
    for(int i = 1; i < n; i++)
        if(arr[i] < arr[idx]) idx = i;
    return idx;
}
int find_max(int arr[], int n)
{
    int idx = 0;
    for(int i = 1; i < n; i++)
        if(arr[i] > arr[idx]) idx = i;
    return idx;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n], b[n], sum_a = 0, sum_b = 0, input;
        for(int i = 0; i < n; i++)
        {
            cin>>input;
            a[i] = input;
            sum_a += input;
        }
        for(int i = 0; i < n; i++)
        {
            cin>>input;
            sum_b += input;
            b[i] = input;
        }
        while(k--)
        {
            int mn_idx = find_min(a, n);
            int mx_idx = find_max(b, n);
            if(a[mn_idx] < b[mx_idx])
            {
                sum_a -= a[mn_idx];
                sum_a += b[mx_idx];
            }
            b[mx_idx] = 0;
            a[mn_idx] = 31;
        }
        cout<<sum_a<<endl;
    }
}*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n], b[n], i = 0, j = n - 1, sum = 0;
        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        while(k--) if(a[i] < b[i]) swap(a[i], b[i]), i++;
        for(int i = 0; i < n; i++) sum += a[i];
        cout<<sum<<endl;
    }
    return 0;
}

