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
   nn arr[n+1];
   arr[0]=1;
   if(n>=20) cout<<"NO"<<nl;
   else
   {
    cout<<"YES"<<nl;
    cout<<1<<" ";
      for(nn i=1;i<n;i++)
      {
        arr[i]=arr[i-1]*3;
        cout<<arr[i]<<" ";

      }
      cout<<nl;
   }

}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}