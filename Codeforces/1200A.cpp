#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
      nn arr[10]={0};
      nn tt;
      ss s;
      cin>>tt>>s;
     for(nn i=0;i<tt;i++)
      {

          if(s[i]=='L')
          {
              for(nn j=0;j<10;j++)
              {
                  if(arr[j]==0)
                  {
                      arr[j]=1;
                      break;
                  }
              }
          }
          else if(s[i]=='R')
          {
                 for(nn j=9;j>=0;j--)
                 {
                  if(arr[j]==0)
                  {
                      arr[j]=1;
                      break;
                  }
              }
          }
          else arr[s[i]-'0']=0;
      }
      for(nn i=0;i<10;i++) cout<<arr[i];
      cout<<endl;

}