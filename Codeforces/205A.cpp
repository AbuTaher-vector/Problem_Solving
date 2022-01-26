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
    vector<nn>v;
    for(nn i=0;i<tt;i++)
    {
        cin>>arr[i];
        v.push_back(arr[i]);
    }
    sort(v.begin(),v.end());
    nn x,cnt=0;
      for(nn i=0;i<tt;i++)
    {
        if(v[0]==arr[i])
        {
            cnt++;
            x=i;
        }
    }
    if(cnt==1) cout<<x+1<<endl;
    else cout<<"Still Rozdil"<<endl;




}