#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int isSort(int ara[], int size)
{
    for(int i = 0; i < size - 1; i++)
        if(ara[i] > ara[i + 1]) return 0;
    return 1;
}
int* partSort(int ara[], int size, int left, int right)
{
    int res[right - left + 1];
    for(int i = left - 1, j = 0; i < right; i++, j++)
        res[j] = ara[i];
    sort(res, res + right - left + 1);
    for(int i = left - 1, j = 0; i < right; i++, j++)
        ara[i] = res[j];
    return ara;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n, m;
    cin>>n>>m;
    int ara[n], index[m], left = 0, right = 0;
    for(int i = 0; i < n; i++) cin>>ara[i];
    for(int i = 0; i < m; i++) cin>>index[i];
    sort(index, index + m);
    left = index[0], right = index[0];
    for(int i = 1; i < m; i++)
    {
        if(index[i-1] != (index[i]-1))
        {
            partSort(ara, n, left, right + 1);
            left = index[i];
            right = index[i];
        }
        else right = index[i];
    }
    partSort(ara, n, left, right + 1);
    if(isSort(ara, n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

    return 0;
}
