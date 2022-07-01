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
int main()
{
     setup();
     
     string s;
     cin>>s;
     int x=s.back();
     s.pop_back();
     if(!s.empty()) x+=10*(s.back()-'0');
     if(x%4==0) cout<<4;
     else cout<<0;
     cout<<"\n";


}