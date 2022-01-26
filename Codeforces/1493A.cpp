
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
        nn n,k;
        cin>>n>>k;
        vector<nn>v;
        nn x=k/2,j=0;
        for(nn i=k+1;i<=n;i++) v.push_back(i);
        for(nn i=k-1;i>=1;i--)
        {
            v.push_back(i);
            j++;
            if(j==x) break;
        }
        cout<<v.size()<<endl;
        for(nn i = 0 ;i < v.size();i++) cout<<v[i]<<" ";
            cout<<endl;
    }

}

