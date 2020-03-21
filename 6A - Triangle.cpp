#include <bits/stdc++.h>

using namespace std;

int isTriangle(int a, int b, int c)
{
    if(a + b > c && b + c > a && c + a > b) return 1;
    return 0;
}
int isSegment(int a, int b, int c)
{
    int ara[3];
    ara[0] = a, ara[1] = b, ara[2] = c;
    sort(ara, ara + 3);
    if(ara[2] == (ara[0] + ara[1])) return 1;
    return 0;
}
int combination(int a, int b, int c, int d)
{
    if(isTriangle(a, b, c) || isTriangle(a, b, d)) return 1;
    if(isTriangle(a, c, d) || isTriangle(b, c, d)) return 1;
    if(isSegment(a, b, c) || isSegment(a, b, d)) return 2;
    if(isSegment(a, c, d) || isSegment(b, c, d)) return 2;
    return 0;
}
int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(combination(a, b, c, d) == 2) cout<<"SEGMENT"<<endl;
    else if(combination(a, b, c, d) == 1) cout<<"TRIANGLE"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
