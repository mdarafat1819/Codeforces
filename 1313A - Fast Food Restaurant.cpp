#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int res = 0;
        vector <int> food;
        for(int i = 0; i < 3; i++)
        {
            int value;
            cin>>value;
            if(value)
            food.push_back(value);
        }
        if(food.size() == 0) cout<<"0"<<endl;
        else if(food.size() == 1) cout<<"1"<<endl;
        else if(food.size() == 2)
        {
            if(food[0] > 1 && food[1] > 1) cout<<"3"<<endl;
            else cout<<"2"<<endl;
        }
        else
        {
            res = 3;
            food[0]--;
            food[1]--;
            food[2]--;
            sort(food.begin(), food.end());
            reverse(food.begin(), food.end());
            if(food[0] * food[1])
            {
                res++;
                food[0]--;
                food[1]--;
            }
            if(food[0] * food[2])
            {
                res++;
                food[0]--;
                food[2]--;
            }
            if(food[1] * food[2])
            {
                res++;
                food[1]--;
                food[2]--;
            }
            if(food[0] && food[1] && food[2]) res++;
             cout<<res<<endl;
        }
    }

    return 0;
}
