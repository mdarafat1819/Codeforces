#include <bits/stdc++.h>

using namespace std;

int b_search(long long n, long long k)
{
    long long l = 1, r = n, sum, mid, ate;
    while(l <= r)
    {
         mid = l + (r - l) / 2;
         sum = (mid * (mid + 1)) / 2;
         ate = sum - k;
         if((ate + mid) == n) return ate;
         if((ate + mid) > n) r = mid - 1;
         else l = mid + 1;
    }
}

int main()
{
    long long n, k;
    cin>>n>>k;
    cout<<b_search(n, k)<<endl;
    return 0;
}

/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, ate = 0, total = 0, i = 1;
    cin>>n>>k;
    while(n--)
    {
       if(total > k) total--, ate++;
       else
       {
           total += i;
           i++;
       }
    }
    cout<<ate<<endl;
    return 0;
}*/
