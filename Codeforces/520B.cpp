#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
    nn n,m,a=0;
    cin>>n>>m;
    while(m>n)
    {
        if(m&1) m++;
        else m/=2;
        a++;

    }
    cout<<a+n-m<<nl;
}