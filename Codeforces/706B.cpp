#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int main()
{
    nn n;
      cin>>n;
      nn arr[n+1];
      for(nn i=0;i<n;i++) cin>>arr[i];
            sort(arr,arr+n);
      nn t,x;
      cin>>t;
      while(t--)
      {
            cin>>x;
            cout<<upper_bound(arr,arr+n,x)-arr<<nl;

      }
   
}