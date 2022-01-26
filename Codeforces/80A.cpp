#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[ ]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
   int x,y,k;
   cin>>x>>y;
   for(int i=0;;i++)
   {
       if(arr[i]==x)
       {
           k=i;
           break;
       }
   }
   if(arr[k+1]==y) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;


}