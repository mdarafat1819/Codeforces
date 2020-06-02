#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x, input;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int v = 0;
        bool marked[102] = {0};
        for(int i = 0; i < n; i++)
        {
            cin>>input;
            marked[input] = 1;
        }
        for(int i = 1; i < 101 && x; i++)
        {
            if(!marked[i]) x--;
            v++;
        }
        while(x) v++, x--;
        while(marked[v + 1] && (v  + 1)< 101) v++;
        cout<<v<<endl;

    }
    return 0;
}
