#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn n,m,k;
    cin>>n>>m>>k;
    nn arr[n+1];
    vector<nn>v;
    for(nn i=0;i<n;i++) cin>>arr[i];
    for(nn i=0;i<n;i++)
    {
        if(arr[i]!=0 && arr[i]<=k)
        {
            nn x=abs(m-i-1);
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0]*10<<endl;


}
