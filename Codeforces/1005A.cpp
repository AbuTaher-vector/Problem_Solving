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
    for(int i=0;i<tt;i++) cin>>arr[i];
    for(int i=0;i<tt-1;i++)
    {
        if(arr[i]>=arr[i+1]) v.push_back(arr[i]);
    }
    v.push_back(arr[tt-1]);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;


}

