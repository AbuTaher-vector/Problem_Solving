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
        
       int r=0,b=0,y=0,g=0;
       string s;
       cin>>s;
       map<char,int>mp;
       for(int i=0;i<4;i++)
       {
        char x;
        int cnt=0;
           for(int j=i;j<s.size();j+=4)
           {
              if(s[j]!='!') x=s[j];
              else cnt++;
           }
           mp[x]=cnt;
       }
       cout<<mp['R']<<" "<<mp['B']<<" "<<mp['Y']<<" "<<mp['G']<<"\n";
}
