#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
    nn n,a,b;
    ss s;
    cin>>n>>a>>b;
    cin>>s;
    nn sub_strings=1;
    for(nn i=0;i<s.size()-1;i++) if(s[i]!=s[i+1]) sub_strings++;
       if(b>=0) sub_strings=n;
   else sub_strings=sub_strings/2+1;
   cout<<a*n+b*sub_strings<<"\n";
    
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}