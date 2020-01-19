#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        string language[] = {"FILIPINO", "JAPANESE", "KOREAN"};
        string suf[] = {"po", "desu", "mnida"};
        string input, po, desu, mnida;
        cin>>ws;
        getline(cin, input);
        int len = input.length();
        if(len >=2)
        po = input.substr(len - 2, len);
        if(len >= 4)
        desu = input.substr(len - 4, len);
        if(len >= 5)
        mnida = input.substr(len - 5, len);
        if(desu == "masu")
            cout<<language[1]<<endl;
        for(int i = 0; i < 3; i++)
        {
            if(po == suf[i])
                cout<<language[i]<<endl;
            else if(desu == suf[i])
                cout<<language[i]<<endl;
            else if(mnida == suf[i])
                cout<<language[i]<<endl;
        }
    }

    return 0;
}
