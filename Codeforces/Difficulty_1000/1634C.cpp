#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("out.txt", "w", stdout);
     #endif
}
void code()
{
    int n,k;
    cin>>n>>k;
     if((n*k)%2!=0 && k>1) cout<<"NO\n";
     else if(((n*k)/2)%k!=0) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                cout<<cnt<<" ";
                cnt+=2;
                if(cnt>n*k) cnt=2;
            }
            cout<<'\n';
        }
    }
}
int main() {
     setup();

       int tt;
       cin>>tt;
       while(tt--) code();
}