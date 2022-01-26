#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
    nn n;
    cin>>n;
    for(nn i=1;i<=n;i++)
    {
        nn x=i;
        while(x--) cout<<'(';
        x=i;
        while(x--) cout<<')';
        x=n-i;
        while(x--) cout<<"()";
        cout<<nl;

    }
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}