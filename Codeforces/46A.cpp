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
    nn k=2,l=2;
    v.push_back(k);
    while(v.size()!=tt-1)
    {
        k+=l;
        if(k>tt) k-=tt;
        v.push_back(k);
        l++;
    }
    for(nn i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;



}