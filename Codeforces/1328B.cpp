#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
    nn n,k;
    cin>>n>>k;
    ss s(n,'a');
    for(nn i=n-2;i>=0;i--)
    {
        if(n-1-i>=k)
        {
            s[i]='b';
            s[n-k]='b';
            cout<<s<<nl;
            break;
        }
        k-=(n-1-i);
    }

}
nn main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}