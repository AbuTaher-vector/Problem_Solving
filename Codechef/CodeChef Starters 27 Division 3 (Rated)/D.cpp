#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n,cnt=1;
    ss s;
    cin>>n>>s;
    for(nn i=0;i<n-1;i++)
    {
     if(s[i]!=s[i+1]) cnt++;
    }
    cout<<cnt<<nl;

}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}