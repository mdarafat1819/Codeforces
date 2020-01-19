#include <iostream>

using namespace std;

int distinct(int n)
{
    int temp1 = n;
    while(temp1)
    {
        int lastdigit = temp1 % 10, flag = 0;
        temp1 /= 10;
        int temp2 = n;
        while(temp2)
        {
            if(lastdigit == (temp2 % 10)) flag++;
            temp2 /= 10;
            if(flag == 2) return 0;
        }
    }
    return 1;
}
int main()
{
    int l, r;
    cin>>l>>r;
    for(int i = l; i <= r; i++)
        if(distinct(i))
        {
            cout<<i<<endl;
            return 0;
        }
    cout<<-1<<endl;

    return 0;
}
