#include <iostream>

using namespace std;

string lowerCase(string str)
{
    for(int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
    return str;
}
string upperCase(string str)
{
    for(int i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);
    return str;
}
int main()
{
    int lower = 0, upper = 0, len;

    string str;
    cin>>str;
    len = str.length();
    for(int i = 0; i < len; i++)
    {
        if((str[i] >= 'a') && (str[i] <= 'z')) lower++;
        else upper++;
    }
    if(upper > lower) cout<<upperCase(str)<<endl;
    else cout<<lowerCase(str)<<endl;

    return 0;
}
