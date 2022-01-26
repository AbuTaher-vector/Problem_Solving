#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
   nn n;
   cin>>n;
   nn arr[n+1];
    for(nn i=0;i<n;i++) cin>>arr[i];
        nn m;
   cin>>m;
   nn ar[m+1];
    for(nn i=0;i<m;i++) cin>>ar[i];
    vector<nn>v;
    for(nn i=0;i<n;i++)
    {
        nn x=0;
        while(x!=m)
        {
            if(ar[x]%arr[i]==0) v.push_back(ar[x]/arr[i]);
            x++;
        }
    }
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
nn cnt=1;
for(nn i=0;i<v.size()-1;i++)
{
    if(v[i]==v[i+1]) cnt++;
    else break;

}
cout<<cnt<<endl;



}

