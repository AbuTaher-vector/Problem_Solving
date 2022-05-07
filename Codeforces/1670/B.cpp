#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
     nn n;
     cin>>n;
     ss s;
     cin>>s;
     nn k;
     cin>>k;
     char x;
      nn arr[26]={0};
     for(nn i=0;i<k;i++)
     {
          cin>>x;
          arr[x-'a']++;

     }
     nn mx=0,cnt=0;
     for(nn i=0;i<n;i++)
     {
          if(arr[s[i]-'a'])
          {
               if(cnt>mx) mx=cnt;
               cnt=0;
          }
          cnt++;
     }
     cout<<mx<<nl;
    
     
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("outputt.txt", "w", stdout);
     #endif
     nn tt;
     cin>>tt;
     while(tt--) code();
}