#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n;
    ss s;
    cin>>n>>s;
    if(n>2) cout<<"NO"<<nl;
    else 
        {
            if(n==1 || s[0]!=s[1]) cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }

}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}