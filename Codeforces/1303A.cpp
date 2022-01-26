#include<bits/stdc++.h>
using namespace std;
int main()
{
      int tt;
      cin>>tt;
      while(tt--)
      {
          string s;
          cin>>s;
          int cnt=0;
          for(int i=s.find('1');i<s.find_last_of('1');i++)
          {
              if(s[i]=='0') cnt++;
          }
          cout<<cnt<<endl;
      }
}