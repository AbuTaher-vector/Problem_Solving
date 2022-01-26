#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

   nn tt,cnt=0;
   cin>>tt;
   char arr[tt+1][tt+1];
   for(nn i=0;i<tt;i++)
   {
       for(nn j=0;j<tt;j++) cin>>arr[i][j];
   }
   for(nn i=1;i<tt-1;i++)
   {
       for(nn j=1;j<tt-1;j++)
       {
           if(arr[i][j]=='X' && arr[i-1][j-1]=='X' && arr[i+1][j-1]=='X' && arr[i-1][j+1]=='X' && arr[i+1][j+1]=='X') cnt++;
       }
   }
   cout<<cnt<<endl;


}