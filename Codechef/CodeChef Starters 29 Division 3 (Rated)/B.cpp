#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
void code()
{
    nn n,cnt=0;
    cin>>n;
     ss s;
     cin>>s;
     for(nn i=0;i<s.size();i++)
     {
        if(i+1<n && s[i]==s[i+1]) i++;
        cnt++;

     }
     cout<<cnt<<nl;

}
int main()
{
  nn tt;
  cin>>tt;
  while(tt--) code();
      
}