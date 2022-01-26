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
          nn n,q;
          cin>>n>>q;
          ss s;
          cin>>s;
          while(q--)
          {
              nn l,r;
              nn arr[n+1]={0};
              cin>>l>>r;
              l--,r--;
              nn flag=0;
              for(nn i=l;i<=r;i++) arr[i]++;
                  nn x=0;
                  while(1)
                  {
                      if(s[x]==s[l] && arr[x]==0 && x<l)
                      {
                          flag=1;
                          break;
                      }
                    else if(s[x]==s[r] && arr[x]==0 && x>r)
                      {
                          flag=1;
                          break;
                      }
                    x++;
                    if(x==n) break;
                  }
              if(flag) cout<<"YES"<<endl;
              else cout<<"NO"<<endl;

          }


      }



}