#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int code()
{
    ss s;
    cin>>s;
    vector<nn>v;
    nn cnt=1;
    for(nn i=0;i<s.size()-1;i++)
    {
       if(s[i]==s[i+1]) cnt++;
       else
       {
           if(cnt<2)
           {
                cout<<"NO"<<nl;
                return 0;
           }
           cnt=1;
       }

    }
    if(cnt<2) cout<<"NO"<<nl;
    else cout<<"YES"<<nl;
    return 0;
}
int main()
{
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();
}