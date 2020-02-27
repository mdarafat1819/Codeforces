#include <iostream>

using namespace std;

int isSort(int ara[], int n)
{
    for(int i = 0; i < n - 1; i++)
        if(ara[i] > ara[i + 1]) return 0;
    return 1;
}

int* isPossible(int ara[], int idx[], int m)
{
    for(int i = 0; i < m; i++)
    {
        int flag = 0;
        for(int j = 0; j < m; j++)
        {
            if(ara[idx[j] - 1] > ara[idx[j]])
            {
                swap(ara[idx[j] - 1], ara[idx[j]]);
                flag++;
            }
        }
        if(!flag) break;
    }
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
        int ara[n], idx[m];
        for(int i = 0; i < n; i++) cin>>ara[i];
        for(int i = 0; i < m; i++) cin>>idx[i];
        isPossible(ara, idx, m);
        if(isSort(ara, n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
