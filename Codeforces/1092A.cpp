#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
      nn tt;
      char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
      cin>>tt;
      while(tt--)
      {
          nn n,k;
          cin>>n>>k;
          k--;
          nn t=-1;
          for(int i=0;i<n;i++)
          {
              t++;
              cout<<arr[t];
              if(t==k) t=-1;
          }
          cout<<endl;
      }



}