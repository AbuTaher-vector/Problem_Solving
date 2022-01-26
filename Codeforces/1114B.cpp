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
    multiset<nn> s;
    multiset<nn> :: iterator it;
    ll sum=0;
    for(nn i=0;i<n;i++)
    {
        cin>>arr[i];
        v.push_back(arr[i]);

    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(nn i=0;i<m*k;i++) 
        {
            sum+=v[i];
            s.insert(v[i]);
        }
    cout<<sum<<"\n";
    nn cnt=0,cntt=0,j=0;
    while(cntt<k-1)
    {
        cnt=0;
        while(1)
        {
            it = s.find(arr[j++]);
            if(it != s.end())
            {
                cnt++;
                s.erase(it);

            } 
            if(cnt==m)
            {
                cout<<j<<" ";
                cntt++;
                break;
            }
        }
    }
    cout<<"\n";
}