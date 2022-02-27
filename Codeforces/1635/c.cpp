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
        if(is_sorted(v.begin(),v.end())) cout<<0<<nl;
        else
        {
             if(v[n-2]<=v[n-1] &&  v[n-1]>=0)
             {
                cout<<n-2<<nl;
                for(nn i=0;i<n-2;i++) cout<<i+1<<" "<<n-1<<" "<<n<<nl;
             }
         else cout<<-1<<nl;
        }



}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();  
}