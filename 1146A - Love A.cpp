#include <iostream>

using namespace std;

int main()
{
    string str;
    int acnt = 0, len;
    cin>>str;
    len = str.length();
    for(int i = 0; i < len; i++)
    {
        if(str[i] == 'a') acnt++;
    }
    if(acnt > (len - acnt)) cout<<len<<endl;
    else cout<<acnt + (acnt - 1)<<endl;

    return 0;
}
