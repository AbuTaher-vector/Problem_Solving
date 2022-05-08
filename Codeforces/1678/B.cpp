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
   cin>>n;
   ss s;
   cin>>s;
   vector<nn>v;
   nn cnt=1,ans=0;
   for(nn i=0;i<n-1;i++)
   {
       if(s[i]==s[i+1]) cnt++;
       else{
        v.push_back(cnt);
        cnt=1;
       }

   }
   v.push_back(cnt);
    for(nn i=0;i<v.size();i++)
    {
        if(v[i]%2==1)
        {
             nn j=i+1;
             while(j<v.size())
             {
                if(v[j]%2==1)
                {
                    ans+=(j-i);
                    i=j;
                    break;
                }
                j++;
             }
        }
    }
    cout<<ans<<nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();
}