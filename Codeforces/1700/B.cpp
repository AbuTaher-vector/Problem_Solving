#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputtt.txt", "w", stdout);
     #endif

}
void code()
{
      nn n;
      cin>>n;
      ss s;
      cin>>s;
      ss x(n,'9');
      if(s[0]!=x[0])
      {
          ss k;
           for(nn i=n-1;i>=0;i--)
          {
               nn a=x[i]-'0';
               nn b=s[i]-'0';
               k.push_back((a-b)+'0');
          }
          reverse(k.begin(),k.end());
          cout<<k<<nl;

      }
      else
      {
          ss k(n,'1');
          ss ans;
          nn carry=0;
          for(nn i=n-1;i>=0;i--)
          {
                nn a=k[i]-'0';
                nn b=s[i]-'0';
                if(b+carry>1)
                {
                    a+=10;
                    b+=carry;
                    ans.push_back((a-b)+'0');
                    carry=1;
                }
                else
                {
                    b+=carry;
                    ans.push_back((a-b)+'0');
                    carry=0;
                }

          }
          reverse(ans.begin(),ans.end());
          cout<<ans<<nl;
      }

}
int main()
{
     setup();

     nn tt;
     cin>>tt;
     while(tt--) code();

}