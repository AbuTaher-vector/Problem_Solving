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
          cin>>s;
          nn flag=0;
          sort(s.begin(),s.end());
          reverse(s.begin(),s.end());
          for(nn i =0;i<s.size()-1;i++)
          {
                nn x=(s[i]-'0')-(s[i+1]-'0');
                if(x!=1)
                {
                    flag=1;
                    break;
                }
          }
          if(flag==0) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;

     }

}
