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
     nn arr[tt+1];
     set<nn>s;
     vector<nn>v;
     for(nn i=0;i<tt;i++) cin>>arr[i];
     sort(arr,arr+tt);
      v.push_back(arr[0]);
      for(nn i=1;i<tt;i++) if(arr[i-1]!=arr[i]) v.push_back(arr[i]);
      if(v.size()<2) cout<<"NO"<<endl;
      else cout<<v[1]<<endl;



}

