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
  vector<nn>v1;
  vector<nn>v2;
  if(tt<4 && tt>1) cout<<"NO SOLUTION"<<"\n";
  else
  {
    for(nn i=1;i<=tt;i++)
    {
      if(i%2==1) v1.push_back(i);
      else v2.push_back(i);
    }
    sort(v1.begin(),v1.end());
    reverse(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    for(nn i=0;i<v1.size();i++) cout<<v1[i]<<" ";
    for(nn i=0;i<v2.size();i++) cout<<v2[i]<<" ";

    cout<<"\n"; 
    

  }
  
}