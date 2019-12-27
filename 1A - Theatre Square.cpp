#include <iostream>

using namespace std;

int main()
{
    long long int n, m, a, row, col;
    cin>>n>>m>>a;
    row = n / a;
    col = m / a;
    if(n % a) row++;
    if(m % a) col++;
    cout<<row * col<<endl;

    return 0;
}
