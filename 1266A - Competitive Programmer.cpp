#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        int digitSum = 0, even = 0, zero = 0, d;
        cin>>str;
        for(int i = 0; i < str.length(); i++)
        {
            int d = str[i] - '0';
            digitSum += d;
            if(!(d % 2) && d) even++;
            if(d == 0) zero++;
        }
        if(digitSum == 0) cout<<"red"<<endl;
        else if(zero >= 2 && (!(digitSum % 3))) cout<<"red"<<endl;
        else if(even && zero && (!(digitSum % 3))) cout<<"red"<<endl;
        else cout<<"cyan"<<endl;
    }
    return 0;
}
