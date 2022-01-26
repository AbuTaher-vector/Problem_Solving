
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt;
    cin >> tt;
    while(tt--)
    {
        ll n;
        cin >> n;
        ll sum = ((n+1)*n)/2 , y = 2, anti = 1;

        for( nn i = 2; i <= n; i *= 2)
        {
            anti += i;
        }

        cout << sum - anti*2 << endl;

    }

}

