#include <iostream>
#include <bits/stdc++.h>
/*Solution:
given that,
        A + B + C = n and a + A = b + B = c + C;
let, A + B = n - C .....(i)
    a + A = c + C .....(ii)
    b + B = c + C ....(iii)
{(i) + (ii)} => A + B = 2c + 2C - a - b ...(iv)
from (iv) and (i) => C = (-2c + a + b + n) / 3;
A = c - a + C
B = c - b + C
*/

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c, n, A, B, C;
        cin>>a>>b>>c>>n;
        C = (-2 * c + a + b + n) / 3;
        A = c - a + C;
        B = c - b + C;
        if((n == (A + B + C)) && (A >= 0 && B >= 0 && C >= 0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
