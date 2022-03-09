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
     nn x,a=n,cnt=0;
     while(n--)
     {
        cin>>x;
        if(x==0) cnt++;
     }
    cout<<max(cnt,a-cnt)<<nl;

}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
      
}