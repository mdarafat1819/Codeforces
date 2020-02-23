#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int res = 0, food[3], idx = 0;
        for(int i = 0; i < 3; i++)
        {
            cin>>food[idx];
            if(food[idx]) idx++;
        }
        if(idx == 0) res = 0;
        else if(idx == 1)res = 1;
        else if(idx == 2)
        {
            if(food[0] > 1 && food[1] > 1) res = 3;
            else res = 2;
        }
        else
        {
            res = 3, food[0]--, food[1]--, food[2]--;
            sort(food, food + 3, greater<int>());
            if(food[0] * food[1])
                res++, food[0]--, food[1]--;
            if(food[0] * food[2])
                res++, food[0]--, food[2]--;
            if(food[1] * food[2])
                res++, food[1]--, food[2]--;
            if(food[0] && food[1] && food[2]) res++;
        }
        cout<<res<<endl;
    }

    return 0;
}
