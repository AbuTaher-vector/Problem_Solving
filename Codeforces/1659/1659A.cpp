#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn n,a,b;
     cin>>n>>a>>b;
     nn k=a/(b+1);
     nn l=a%(b+1);
     while(b--)
     {
          if(l)
          {
               cout<<'R';
               l--;
          }
          for(nn i=1;i<=k;i++) cout<<'R';
          cout<<'B'; 
     }
     while(l--) cout<<'R';
     for(nn i=1;i<=k;i++) cout<<'R';
          cout<<nl;
     

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