#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t>=0) cout<<t<<endl;
    else
    {

          vector<int>a;
          t=abs(t);
          while(t!=0)
          {
              int x=t%10;
              a.push_back(x);
              t=t/10;
          }
          if(a[0]>=a[1]) a.erase(a.begin()+0);
          else if(a[1]>a[0]) a.erase(a.begin()+1);
          if(a[a.size()-1]!=0) cout<<"-";
          for(int i=a.size()-1;i>=0;i--) cout<<a[i];
          cout<<endl;
    }
}