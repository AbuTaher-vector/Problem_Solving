#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("put.txt", "w", stdout);
     #endif
}
void code()
{
    int n;
    cin>>n;
    if(n==3) cout<<-1<<'\n';
    else if(n%2==0)
    {
        for(int i=n;i>=1;i--) cout<<i<<" ";
            cout<<'\n';
    }
    else
    {
        int k=n/2+1;
        for(int i=n;i>k;i--) cout<<i<<" ";
            for(int i=1;i<=k;i++) cout<<i<<" ";
                cout<<'\n';
    }
}
int main() {
    setup();
       
      int tt;
      cin>>tt;
      while(tt--) code();
}