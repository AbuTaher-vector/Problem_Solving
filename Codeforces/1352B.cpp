#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
int code()
{
    nn n,k;
    cin>>n>>k;
    if((n-(k-1))%2==1 && (n-(k-1))>0)
    {
        nn q=k-1;
        cout<<"YES\n";
        while(q--) cout<<1<<" ";
        cout<<n-(k-1)<<nl;
        return 0;
    }
    else
    {
        nn q=(k-1)*2;
        nn w=k-1;
        if((n-q)%2==0 && (n-q)>0)
        {
             cout<<"YES\n";
            while(w--) cout<<2<<" ";
            cout<<n-q<<nl;
          return 0;
        }
    }
    cout<<"NO\n";
    return 0;


}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}