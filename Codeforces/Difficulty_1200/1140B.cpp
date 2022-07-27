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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,b=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        if(s[i]=='<')
        {
            a=i;
            break;
        }

    }
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        if(s[i]=='>')
        {
            b=i;
            break;
        }
    }
    cout<<min(a,b)<<"\n";
}
int main()
{
       setup();
       
       int tt;
       cin>>tt;
       while(tt--) code();

}
