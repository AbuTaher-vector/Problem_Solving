#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"
void code()
{
    nn n;
    cin>>n;
    if(n<=2) cout<<0<<nl;
    else if(n<=4) cout<<1<<nl;
    else
    {
        nn a=n,cnt=0;
         while(a)
         {
            cnt++;
            a>>=1;
         }
         if(pow(2,cnt)==n) cnt++;
         cout<<n-cnt<<nl;
    }


}
int main()
{ 
     nn tt;
     cin>>tt;
     while(tt--) code();   
}