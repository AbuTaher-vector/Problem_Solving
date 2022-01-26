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
   for(nn i=1;i<=tt;i++)
    {
        vector<nn>v;
        nn k=3,x;
        while(k--)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout<<"Case" <<" "<<i<<": "<<v[1]<<endl;;


    }

}