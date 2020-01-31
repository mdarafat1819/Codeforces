#include <iostream>

using namespace std;

int upper(int n, int s, int closed[], int k)
{
    while(1)
    {
        int flag = 0;
        for(int i = 0; i < k; i++)
            if(s == closed[i]) flag++;
        if(!flag) return s;
        if(s == n) return 0;
        s++;
    }
}
int lower(int s, int closed[], int k)
{
    while(1)
    {
        int flag = 0;
        s--;
        if(!s) return 0;
        for(int i = 0; i < k; i++)
            if(s == closed[i]) flag++;
        if(!flag) return s;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, s, k, up, down;
        cin>>n>>s>>k;
        int closed[k];
        for(int i = 0; i < k; i++) cin>>closed[i];
        up = upper(n, s, closed, k);
        down = lower(s, closed, k);
        if(up && down) cout<<min((up - s), (s - down))<<endl;
        else if(up) cout<<(up - s)<<endl;
        else cout<<(s - down)<<endl;
    }

    return 0;
}
