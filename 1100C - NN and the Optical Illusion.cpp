#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main()
{
    double n, r;
    cin>>n>>r;
    printf("%lf\n", (r * sin(PI / n)) / (1 - sin(PI / n)));
    return 0;
}
