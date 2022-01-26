#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

  nn tt;
  cin>>tt;
  while(tt--)
  {
      nn  n,k1,k2;
      cin>>n>>k1>>k2;
      nn ar[k1+1],arr[k2+1];
      vector<nn>v;
      for(nn i=0;i<k1;i++)
      {
          cin>>ar[i];
          v.push_back(ar[i]);
      }
       for(nn i=0;i<k2;i++)
        {
          cin>>arr[i];
          v.push_back(arr[i]);
       }
       sort(ar,ar+k1);
       reverse(ar,ar+k1);
       sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
       if(v[0]==ar[0]) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
  }

}
