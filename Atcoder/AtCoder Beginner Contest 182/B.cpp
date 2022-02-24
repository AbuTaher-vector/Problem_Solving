#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
    nn n;
    cin>>n;
    vector<nn>v(n);
    vector<pair<nn,nn>>p;
    for(nn i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(nn i=2;i<=v[0];i++)
        {
            nn cnt=0;
            for(nn j=0;j<n;j++)
            {
                if(v[j]%i==0) cnt++;

            }
            p.push_back(make_pair(cnt,i));

        }
       
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        cout<<p[0].second<<nl;
}