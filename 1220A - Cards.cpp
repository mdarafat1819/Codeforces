#include <iostream>

using namespace std;

int main()
{
    int len;
    cin>>len;
    int o = 0, n = 0, e = 0, z = 0, r = 0;
    for(int i = 0; i < len; i++)
        {
            char ch;
            cin>>ch;
            if(ch == 'o') o++;
            else if(ch == 'n') n++;
            else if(ch == 'e') e++;
            else if(ch == 'z') z++;
            else if(ch == 'r') r++;
        }
    int one = min(min(o, n), e);
    o -= one, n -= one, e -= one;
    int zero = min(min(z, e), min(r, o));
    for(int i = 0; i < one; i++) cout<<"1 ";
    for(int i = 0; i < zero; i++) cout<<"0 ";
    return 0;
}
