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
    for(nn i=0;i<tt;i++) cin>>arr[i];
    nn k=1;
    vector<nn>v;
    while(1)
    {
        nn x=0,max=0;
        while(1)
        {
            if(x==k) x++;
            nn l=x+1;
            if(l==k) l++;
            nn t=abs(arr[x]-arr[l]);
            if(t>max) max=t;
            if(l==tt-1) break;
            x++;
        }
        v.push_back(max);
        if(k==tt-2) break;
        k++;
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;

}

