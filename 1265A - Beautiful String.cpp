#include <iostream>

using namespace std;

int isPossible(string str)
{
    for(int i = 0; i < str.length() - 1; i++)
        if(str[i] == str[i + 1] && str[i] >= 'a') return 0;
    return 1;
}

string beautifulString(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '?')
        {
            for(char j = 'a'; j <= 'c'; j++)
                if(str[i - 1] != j && str[i + 1] != j) str[i] = j;
        }
    }
    return str;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        cin>>str;
        if(isPossible(str))
            cout<<beautifulString(str)<<endl;
        else cout<<"-1"<<endl;
    }

    return 0;
}
