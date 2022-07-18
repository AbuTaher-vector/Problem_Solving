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
    string a,s;
    cin>>a>>s;
    int x=s.size()-a.size();
    reverse(a.begin(),a.end());
    if(x) while(x--) a.push_back('0');
    reverse(s.begin(),s.end());
    string ans;
    for(int i=0,j=0;i<s.size() && j<s.size();i++,j++)
    {
        if(s[i]>=a[j]){
        int q=s[i]-a[j];
        ans.push_back(q+'0');

        } 
        else
        {
            int k=s[i+1]-'0';
            k=k*10+(s[i]-'0');
            int l=a[j]-'0';
            if(k<l || k-l>9)
            {
                cout<<-1<<'\n';
                return 0;
            }
            int q=k-l;
            ans.push_back(q+'0');
            i++;

        }
         if(i==s.size()-1 && j!=s.size()-1 && a.back()!='0')
            {
                cout<<-1<<'\n';
                return 0;
            }
    }
    while(ans.back()=='0') ans.pop_back();
    reverse(ans.begin(),ans.end());
    cout<<ans<<'\n';
    return 0;

}
int main()
{
       setup();

       int t;
       cin>>t;
       while(t--) code();

}
