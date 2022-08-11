#include<bits/stdc++.h>
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif
} 
int main()
{
       setup();
       
       int n;
       cin>>n;
       int x,y;
       for(int i=sqrt(n);i>=1;i--)
       {
           if(n%i==0 && i<5)
           {
            cout<<-1<<'\n';
            return 0;
           }
           if(n%i==0 && i>=5)
           {
              x=i,y=n/i;
              break;
           }
       }
      string s="aeiou";
      char arr[x+1][y+1];
      for(int i=0;i<x;i++)
      {
          for(int j=0;j<5;j++)
          {
               arr[i][j]=s[j];
          }
          char t=s[0];
          s.erase(0,1);
          s.push_back(t);
      }
      for(int j=5;j<y;j++)
      {
          for(int i=0;i<5;i++)
          {
             arr[i][j]=s[i];
          }
      }
      for(int i=5;i<x;i++)
      {
          for(int j=5;j<y;j++) arr[i][j]='x';
      }
     for(int i=0;i<x;i++)
     {
        for(int j=0;j<y;j++) cout<<arr[i][j];
     }
    cout<<'\n';
}
