#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl '\n'
int main()
{
     
     nn n;
     cin>>n;
     nn x,one=0,two=0;
     while(n--)
     {
          cin>>x;
          if(x==1) one++;
          else two++;
     }
     if(two>0){
          cout<<2<<" ";
          two--;
     }
     if(one>0){
          cout<<1<<" ";
          one--;
     }
     while(two--) cout<<2<<" ";
     while(one--) cout<<1<<" ";
     cout<<nl;

}