#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
}
void code()
{
        string a,b;
        cin>>a>>b;
        int t=0,x=0,y=0;
        for(int i=0;i<b.size();i++)
        {
            if(b[i]=='a') x++;
            else y++;
        }
        if((x && y) || x>1) cout<<-1<<'\n';
        else if(x==1) cout<<1<<'\n';
        else
        {
            long long int ans=1;
            for(int i=0;i<a.size();i++) ans*=2;

                cout<<ans<<'\n';
        }

   
}
int main() {
     setup();
     
     int tt;
     cin>>tt;
     while(tt--) code();
}