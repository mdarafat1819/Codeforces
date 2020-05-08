#include <iostream>

using namespace std;

int main()
{
    int h1, m1, h2, m2, h, m;
    char ch;
    cin>>h1>>ch>>m1>>h2>>ch>>m2;
    int tm = (60 - m1) + m2 + (h2 - h1 - 1) * 60;
    tm /= 2;
    h = h1 + tm / 60;
    m = m1 + tm % 60;
    if(m >= 60)
    {
        h += 1;
        m = m - 60;
    }
    if(h < 10 && m < 10)
        cout<<"0"<<h<<":"<<"0"<<m<<endl;
    else if(h < 10 && m >= 10)
        cout<<"0"<<h<<":"<<m<<endl;
    else if(h >= 10 && m < 10)
        cout<<h<<":"<<"0"<<m<<endl;
    else
        cout<<h<<":"<<m<<endl;

    return 0;
}
