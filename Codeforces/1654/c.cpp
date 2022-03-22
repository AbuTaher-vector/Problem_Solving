#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"
void code()
{
    nn n;
    ll sum=0;
    cin>>n;
    vector<ll>v(n);
    priority_queue<ll>q;
    for(nn i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    sort(v.begin(),v.end());
    q.push(sum);
    while(n)
    {
        ll x=q.top();
        q.pop();
        if(x==v[n-1])
        {
            n--;
            continue;
        }
        if(x<v[n-1]) break;

        ll a=x/2;
        ll b=x-a;
        q.push(a);
        q.push(b);

    }
    if(n) cout<<"No"<<nl;
    else cout<<"Yes"<<nl;


}
int main()
{ 
   nn tt;
   cin>>tt;
   while(tt--) code();  
}