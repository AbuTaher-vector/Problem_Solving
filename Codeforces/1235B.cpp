#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int x,cnt=0;
        cin>>x;
        int arrr[x+1];
        for(int i=0;i<x;i++) cin>>arrr[i];
        sort(arrr,arrr+x);
          for(int i=0;i<x;i++)
          {
              if(arrr[i]!=arrr[i+1]) cnt++;
          }

        cout<<cnt<<endl;

    }
}