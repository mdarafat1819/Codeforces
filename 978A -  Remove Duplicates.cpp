#include <iostream>

using namespace std;

int main()
{
    int n, ara[1001] = {0}, res[100], idx = 0, value;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>value;
        if(!ara[value])
            res[idx] = value, idx++, ara[value]++;
        if(ara[value])
        {
            for(int i = 0; i < idx; i++)
            {
                if(res[i] == value)
                {
                    for(int j = i; j < idx - 1; j++)
                        swap(res[j], res[j + 1]);
                    idx--;
                }
            }
            res[idx] = value;
            idx++;
        }
    }
    cout<<idx<<endl;
    for(int i = 0; i < idx; i++)
        cout<<res[i]<<" ";

    return 0;
}
