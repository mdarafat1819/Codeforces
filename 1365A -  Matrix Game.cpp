#include <bits/stdc++.h>

using namespace std;

int arr[51][51];

int judge(int r, int c, int n, int m)
{
    for(int i = 0; i < n; i++)
        if(arr[i][c]) return 0;
    for(int i = 0; i < m; i++)
        if(arr[r][i]) return 0;
    return 1;
}

int main()
{
    int t, n, m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int cnt = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++) cin>>arr[i][j];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(judge(i, j, n, m))
                {
                    arr[i][j] = 1;
                    cnt++;
                }
            }
        }
        cnt % 2 ? cout<<"Ashish"<<endl : cout<<"Vivek"<<endl;
    }
    return 0;
}
