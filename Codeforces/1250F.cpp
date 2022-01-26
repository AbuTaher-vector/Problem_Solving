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
    vector<nn>v;
    for(nn i=1;i<=sqrt(tt);i++)
    {
        if(tt%i==0)
        {
            nn k=i*2+(tt/i)*2;
            v.push_back(k);
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}