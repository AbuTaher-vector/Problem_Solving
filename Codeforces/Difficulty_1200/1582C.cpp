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
int code()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
   int x=0,y=n-1;
   char a='0',b='0';
   while(x<y)
   {
        if(s[x]!=s[y])
        {
            a=s[x],b=s[y];
            break;
        }
        x++,y--;
   }
   if(a=='0') 
    {
        cout<<0<<'\n';
        return 0;
    } 
    string k=s;
    x=0,y=0;
    for(int i=0;i<s.size()/2;i++)
    {
        int z=s.size();
        if(s[i]!=s[z-i-1])
        {
            if(s[i]==a)
            {
                s.erase(i,1);
                x++;
                i--;
            }
            else if(s[z-i-1]==a)
            {
                s.erase(z-i-1,1);
                x++;
                i--;
            }
        }
    }  
    for(int i=0;i<k.size()/2;i++)
    {
        int z=k.size();
        if(k[i]!=k[z-i-1])
        {
            if(k[i]==b)
            {
                k.erase(i,1);
                y++;
                i--;
            }
            else if(k[z-i-1]==b)
            {
                k.erase(z-i-1,1);
                y++;
                i--;
            }
        }
    } 
    string c=s,d=k;
    reverse(c.begin(),c.end());
    reverse(d.begin(),d.end());
    if(s!=c && k!=d) cout<<-1<<'\n';
    else if(s==c && k==d) cout<<min(x,y)<<'\n';
    else if(s==c) cout<<x<<'\n';
    else cout<<y<<'\n';
    return 0;

   
}
int main()
{
       setup();
       int tt;
       cin>>tt;
       while(tt--) code();

}
