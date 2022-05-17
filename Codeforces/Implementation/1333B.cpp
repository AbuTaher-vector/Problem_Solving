#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void setup()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif

}
int code()
{ 
    nn n;
    cin>>n;
    vector<nn>a(n),b(n);
    for(nn i=0;i<n;i++) cin>>a[i];
        for(nn i=0;i<n;i++) cin>>b[i];
    nn one=0,mone=0;
    for(nn i=0;i<n;i++)
    {
         if(a[i]!=b[i])
         {
              if(a[i]<b[i] && !one)
              {
                cout<<"NO"<<nl;
                return 0;
              }
              if(a[i]>b[i] && !mone)
              {
                cout<<"NO"<<nl;
                return 0;
              }

         }
         if(a[i]==1) one++;
         if(a[i]==-1) mone++;
    }
    cout<<"YES"<<nl;
    return 0;

    
      

}
int main()
{
        setup();
        nn tt;
        cin>>tt;
        while(tt--) code();
}