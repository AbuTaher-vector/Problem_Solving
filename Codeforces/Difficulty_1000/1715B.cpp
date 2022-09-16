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
    long long int n,k,b,s;
    cin>>n>>k>>b>>s;
    if(k*b>s) cout<<-1<<'\n';
    else
    {
        long long int t=b+1;
        t*=k;
        t--;
        if(k==1)
        {
            if(b!=s) cout<<-1<<'\n';
            else
            {
                cout<<s<<" ";
                int q=n-1;
                while(q--) cout<<0<<" ";
                 cout<<'\n';

            }

        }
        else if(s>t)
        {
            long long int c=s-t;
            long long int d=k-1;
            long long int x=c/d;
            if(c%d!=0) x++;
            if(x>n-1) cout<<-1<<'\n';
            else
            {
                cout<<t<<" ";
                int q=n-1;
                while(q--)
                {
                    if(d<=c) cout<<d<<" ";
                    else cout<<c<<" ";
                    if(d<c) c-=d;
                    else c=0;
                } 
                cout<<'\n';

            }
        }
        else
        {
                cout<<s<<" ";
                int q=n-1;
                while(q--) cout<<0<<" ";
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