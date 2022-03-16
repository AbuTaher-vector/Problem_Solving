#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
   ss s;
   cin>>s;
   char a=s.front(),b=s.back();
   nn cnt=0,mx=0;
   for(nn i=0;i<s.size();i++)
   {
        if(s[i]!=a && s[i]!=b) cnt++;
        else
        {
            mx=max(cnt,mx);
            cnt=0;

        }

   }
   if(!mx) cout<<-1<<nl;
   else cout<<mx<<nl;

}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}