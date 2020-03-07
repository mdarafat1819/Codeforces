#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n];
        for(int i = 0; i < n; i++) cin>>ara[i];
        for(int i = 0; i < n; i++)
        {
            if(!(ara[i] % 2))
            {
                cout<<"1"<<"\n"<<i + 1<<endl;
                break;
            }
            if(i == (n - 1))
            {
                if(n > 1) cout<<"2\n1 2"<<endl;
                else cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}
