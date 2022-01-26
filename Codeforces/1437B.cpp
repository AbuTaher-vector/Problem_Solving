#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
      nn tt;
      cin>>tt;
      while(tt--)
      {
          ss s;
          nn x,cnt=0;
          cin>>x>>s;
          for(int i=0;i<s.size()-1;i++)
          {
              if(s[i]==s[i+1])
              {
                  cnt++;

              }
          }
          cout<<(cnt+1)/2<<endl;


      }

}