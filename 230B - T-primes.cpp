#include <bits/stdc++.h>

#define SIZE 1000001

using namespace std;

bool prime[SIZE];

void sieve()
{
    for(int i = 3; i * i < SIZE; i += 2)
    {
        if(prime[i] == false)
        {
            for(int j = i * i; j < SIZE; j += 2 * i)
                prime[j] = true;
        }
    }
}

int main()
{
    sieve();
    long long n, temp, input;
    cin>>n;
    string ans[n];
    for(int i = 0; i < n; i++)
    {
        cin>>input;
        temp = sqrt(input);
        if(input == 4) ans[i] = "YES";
        else if(input == 1) ans[i] = "NO";
        else if((temp * temp == input) && (temp % 2) && (prime[temp] == false)) ans[i] = "YES";
        else ans[i] = "NO";
    }
    for(int i = 0; i < n; i++) cout<<ans[i]<<endl;
    return 0;
}
