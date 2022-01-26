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
     nn arr[n+1];
     for(nn i=0;i<n;i++) cin>>arr[i];
          nn k=n-1;
     while(k>0 && arr[k-1]>=arr[k]) k--;
     while(k>0 && arr[k-1]<=arr[k]) k--;
     cout<<k<<nl;
     
}
int main()
{
     nn tt;
     cin>>tt;
     while(tt--) code();
    
}