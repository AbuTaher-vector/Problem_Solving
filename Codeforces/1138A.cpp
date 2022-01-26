#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

    nn tt,cnt=1;
    cin>>tt;
    nn arr[tt+1];
    vector<nn>v1;
    for(nn i=0;i<tt;i++) cin>>arr[i];

    for(nn i=0;i<tt;i++)
    {
      if(arr[i]==arr[i+1]) cnt++;
      else
      {
          v1.push_back(cnt);
          cnt=1;
      }

    }
    nn l=0;
    for(nn i=0;i<v1.size()-1;i++) l=max(l,min(v1[i],v1[i+1]));
    cout<<2*l<<endl;





}