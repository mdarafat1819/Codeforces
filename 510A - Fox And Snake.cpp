#include <iostream>

using namespace std;

int main()
{
    int n, m, flag = 0;
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2)
        {
            for(int j = 0; j < m; j++)
            cout<<"#";
            cout<<endl;
        }
        else
        {
            if(!flag)
            {
                for(int j = 1; j < m; j++)
                    cout<<".";
                cout<<"#"<<endl;
                flag = 1;
            }
            else
            {
                cout<<"#";
                for(int j = 1; j < m; j++)
                    cout<<".";
                cout<<endl;
                flag = 0;
            }
        }
    }
    return 0;
}
