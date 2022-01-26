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
          nn cnt=0,cnt2=0,cnt3=0;
          cin>>s;
          for(nn i=0;i<s.size();i++)
          {
              if(s[i]=='(') cnt2++;
              if(s[i]=='[') cnt3++;
              if(s[i]==')')
              {
                  if(cnt2>0)
                  {
                      cnt++;
                      cnt2--;
                  }
              }
              if(s[i]==']')
              {
                  if(cnt3>0)
                  {
                      cnt++;
                      cnt3--;
                  }
              }

          }
          cout<<cnt<<endl;

      }



}