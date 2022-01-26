#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n;
    cin>>n;
    vector<nn>v(n);
    for(nn i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
    cout<<v[v.size()-1]-v[0]<<nl;

}
int main()
{ 
    nn tt;
    cin>>tt;
    while(tt--) code();
   
   
}