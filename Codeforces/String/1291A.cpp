#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
using namespace std;
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
    ss s;
    cin>>n>>s;
    while(s.size()!=0 && (s.back()-'0')%2==0)
    {
        nn a=s.size()-1;
        s.erase(a,1);
    }
    if(s.size()==0)
    {
        cout<<-1<<nl;
        return 0;
    }
    nn sum=0,odd=0;
    for(nn i=0;i<s.size();i++)
    {
        sum+=(s[i]-'0');
        if((s[i]-'0')%2) odd++;

    }
    if(sum%2==0)
    {
        cout<<s<<nl;
        return 0;
    }
    if(odd>1)
    {
        reverse(s.begin(),s.end());
        for(nn i=1;i<s.size();i++)
        {
            if((s[i]-'0')%2) 
            {
                s.erase(i,1);
               break;
            }
        }
       reverse(s.begin(),s.end());
       if(s[0]=='0') cout<<-1<<nl;
       else cout<<s<<nl;
       return 0;

    }
    cout<<-1<<nl;
    return 0;


}
int main()
{
   setup();
   nn tt;
   cin>>tt;
   while(tt--) code();
}