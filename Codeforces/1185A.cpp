#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

   nn arr[4],x;
   cin>>arr[0]>>arr[1]>>arr[2]>>x;
   sort(arr,arr+3);
   nn a=max(0,x-(arr[1]-arr[0]));
   nn b=max(0,x-(arr[2]-arr[1]));
   cout<<a+b<<endl;



}