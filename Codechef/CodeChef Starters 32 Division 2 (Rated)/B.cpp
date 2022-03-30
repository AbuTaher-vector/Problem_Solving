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
    vector<vector<nn>>v;
    for(nn i=n-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            nn x=i+1;
            for(nn j=0;j<=i;j++)
            {
                if(s[j]=='1') s[j]='0';
                else s[j]='1';
            }
            v.push_back({1ll,x});
        }
    }
    cout<<v.size()<<nl;
    for(auto x:v) cout<<x[0]<<" "<<x[1]<<nl;
   


}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();

}