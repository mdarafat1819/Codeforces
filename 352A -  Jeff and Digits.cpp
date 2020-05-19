#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, five = 0, zero = 0;
    string str;
    cin>>n;
    cin.ignore();
    getline(cin, str);
    for(int i = 0; i < str.length(); i++)
        if(str[i] == '5') five++;
    zero = n - five;
    if(!zero) cout<<"-1"<<endl;
    else
    {
        if(five < 9) cout<<"0"<<endl;
        else
        {
            five = (five / 9) * 9;
            for(int i = 0; i < five; i++) cout<<"5";
            for(int i = 0; i < zero; i++) cout<<"0";
            cout<<endl;
        }

    }
    return 0;
}
