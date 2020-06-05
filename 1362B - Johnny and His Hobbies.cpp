#include <bits/stdc++.h>

using namespace std;

int judge(bool marked[], int k)
{
    for(int i = 0; i < 1025; i++)
    {
        int x = i ^ k;
        if(x < 1025) if(marked[i] && (!marked[x])) return 0;
    }
    return 1;
}

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool marked[1025] = {false};
        int input, k = 1;
        for(int i = 0; i < n; i++)
        {
            cin>>input;
            marked[input] = true;
        }
        while(judge(marked, k) == 0 && k < 1025) k++;
        k < 1024 ? cout<<k<<endl : cout<<"-1"<<endl;
    }
    return 0;
}
