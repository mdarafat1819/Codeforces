#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector <int> divisor(int n)
{
    vector <int> res;
    for(int i = 2; i * i <= n; i++)
    {
        if(i * i == n) res.push_back(i);
        else if(!(n % i))
        {
           res.push_back(i);
           res.push_back(n / i);
        }
    }
    return res;
}
int isPossible(int first, int second, int n)
{
    int third = n / (first * second);
    if(third == 1) return 0;
    vector <int> distict;
    distict.push_back(first);
    distict.push_back(second);
    distict.push_back(third);
    sort(distict.begin(), distict.end());
    for(int i = 0; i < 3; i++)
        if(distict[i] == distict[i + 1]) return 0;
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, ans = 0;
        cin>>n;
        vector <int> div = divisor(n);
        vector <int> result;
        for(int i = 0; i < div.size(); i++)
        {
            int flag = 0;
            for(int j = 0; j < div.size(); j++)
            {
                if(!(n % (div[i] * div[j])))
                {
                    if(isPossible(div[i], div[j], n))
                    {
                        result.push_back(div[i]);
                        result.push_back(div[j]);
                        result.push_back(n / (div[i] * div[j]));
                        flag++;
                    }
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(result.size())
        {
            cout<<"YES"<<endl;
            for(int i = 0; i < 3; i++)
            {
                if(i == 2) cout<<result[i]<<endl;
                else
                 cout<<result[i]<<" ";
            }
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
