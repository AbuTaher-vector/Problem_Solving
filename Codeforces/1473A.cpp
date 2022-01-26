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
        nn n,d,x;
        vector<nn>v;
        cin>>n>>d;
        while(n--)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        nn k=v[0]+v[1];
        if(v.back()<=d || k<=d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}