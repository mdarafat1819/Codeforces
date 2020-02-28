#include <iostream>

using namespace std;

int main()
{
    int n, alp[26] = {0}, sum = 0;
    cin>>n;
    cin.ignore();
    char ch;
    for(int i = 0; i < n; i++)
    {
        cin>>ch;
        ch = toupper(ch);
        if(!(alp[ch - 65]))
            alp[ch - 65]++;
    }
    for(int i = 0; i < 26; i++)
        sum += alp[i];
    if(sum == 26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
