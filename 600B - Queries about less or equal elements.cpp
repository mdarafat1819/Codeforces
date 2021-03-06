#include <bits/stdc++.h>

using namespace std;

void merge_sort(int ara[], int l, int r)
{
    int mid = l + (r - l) / 2;
    if(l == r) return;
    merge_sort(ara, l, mid);
    merge_sort(ara, mid + 1, r);
    int temp[r-l+1], i = l, j = mid + 1, k = 0;
    while((i <= mid) && (j <= r))
    {
        if(ara[i] < ara[j]) temp[k++] = ara[i++];
        else temp[k++] = ara[j++];
    }
    while(i <= mid) temp[k++] = ara[i++];
    while(j <= r) temp[k++] = ara[j++];
    for(i = l, j = 0; i <= r; i++, j++)
        ara[i] = temp[j];
}
int b_search(int ara[], int l, int r, int need)
{
    int mid = l + (r - l) / 2, cnt = 0;
    if(l > r) return cnt;
    if(ara[mid] <= need) cnt += (mid - l + 1);
    if(ara[mid] <= need) cnt += b_search(ara, mid + 1, r, need);
    if(ara[mid] > need) cnt += b_search(ara, l, mid - 1, need);
    return cnt;
}
int main()
{
    int n, m;
    cin>>n>>m;
    int a[n], b[m], ans[m];
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < m; i++) cin>>b[i];
    merge_sort(a, 0, n - 1);
    for(int i = 0; i < m; i++)
        ans[i] = b_search(a, 0, n - 1, b[i]);
    for(int i = 0; i < m; i++)
        cout<<ans[i]<<" ";
    return 0;
}
