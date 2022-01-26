#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define sss string
int main()
{

      nn n,c,cnt=1;
      cin>>n>>c;
      int arr[n+1];
      for(int i=0;i<n;i++) cin>>arr[i];

       for(int i=0;i<n-1;i++)
       {
           if(arr[i+1]-arr[i]<=c) cnt++;
           else cnt=1;
       }
      cout<<cnt<<endl;
}