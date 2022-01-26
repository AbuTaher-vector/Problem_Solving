#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
    ss s;
    cin>>s;
    nn a=0,b=0,c=0;
    for(nn i=0;i<s.size();i++)
    {
        if(s[i]=='A') a++;
        else if(s[i]=='B') b++;
        else c++;
    }
    if(b==(a+c) && b!=0) cout<<"YES"<<nl;
    else cout<<"No"<<nl;
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}