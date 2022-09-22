#include<bits/stdc++.h>
using namespace std;
void setup()
{
     ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
}
int main() {
     setup();
     
     int n,k;
     string s;
     cin>>n>>k>>s;
     int cnt=0;
     for(int i=0;i<n-2;i++)
     {
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c') cnt++;
     }
     while(k--)
     {
        int t;
        char x;
        cin>>t>>x;
        t--;
        if(s[t]==x) cout<<cnt<<'\n';
        else
        {
        
                if(x!='a' && s[t]=='a' && t+1<n && t+2<n  && s[t+1]=='b' && s[t+2]=='c') cnt--;
                else if(x!='b' && s[t]=='b' && t-1>=0 && t+1<n  && s[t-1]=='a' && s[t+1]=='c') cnt--;
               else if(x!='c' && s[t]=='c' && t-1>=0 && t-2>=0  && s[t-1]=='b' && s[t-2]=='a') cnt--;

               s[t]=x;

               if(x=='a' && t+1<n && t+2<n  && s[t+1]=='b' && s[t+2]=='c') cnt++;
            else if(x=='b' && t-1>=0 && t+1<n  && s[t-1]=='a' && s[t+1]=='c') cnt++;
            else if(x=='c' && t-1>=0 && t-2>=0  && s[t-1]=='b' && s[t-2]=='a') cnt++;


            cout<<cnt<<'\n';
        }
     }

}