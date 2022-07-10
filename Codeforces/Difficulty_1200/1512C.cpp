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
    int a,b;
    string s;
    cin >> a >> b >> s;
    int n = a+b;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0') a--;
        else if(s[i]=='1') b--;
    }
    if(a<0 || b<0) 
    {
        cout << -1 << '\n';
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '?' && s[n-i-1] == '?') continue;

        if(s[i] == '?' || s[n-i-1] == '?')
        {
            if((s[i] == '0' || s[n-i-1] == '0') && a!=0)
            {
                a--;
                s[i] = '0';
                s[n-i-1] = '0';

            }
           else if((s[i] == '1' || s[n-i-1] == '1') && b!=0)
            {
                b--;
                s[i] = '1';
                s[n-i-1] = '1';

            }

        }

    }
    for(int i=0;i<s.size();i++)
    {
        if(i==n-i-1) continue;
        if(s[i]=='?')
        {
                if(a>=b && a>1) 
                    {
                        s[i]='0';
                        s[n-i-1]='0';
                        a-=2;
                    }
                else if(b>=a && b>1) 
                    {
                        s[i]='1';
                        s[n-i-1]='1';
                        b-=2;
                    }
        }
        
    }
    if(n&1 && s[n/2]=='?')
    {
        if(a) s[n/2]='0';
        else if(b) s[n/2]='1';
    }
    if(count(s.begin(),s.end(),'?'))
    {
        cout<<-1<<"\n";
        return 0;
    }
    string v=s;
    reverse(v.begin(),v.end());
    if(v==s) cout<<s<<"\n";
    else cout<<-1<<"\n";
    return 0;


    
}
int main()
{
     setup();

     int test;
     cin >> test;
     while(test--) code();
}