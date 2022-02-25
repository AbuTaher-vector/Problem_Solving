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
    vector<nn>v(n*2);
    nn even=0,odd=0;
    for(nn i=0;i<n*2;i++) 
        {
            cin>>v[i];
            if(abs(v[i])%2==0) even++;
            else odd++;
        }
        if(even%2==0 && odd%2==0) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
       


}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}