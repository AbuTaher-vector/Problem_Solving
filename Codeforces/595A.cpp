#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

     nn n,m,cnt=0;
     cin>>n>>m;
     while(n--)
     {
         nn arr[2*m+1];
         for(nn i=0;i<2*m;i++) cin>>arr[i];
         for(nn i=0;i<2*m;i+=2) if(arr[i]==1 || arr[i+1]==1) cnt++;
     }
     cout<<cnt<<endl;


}
