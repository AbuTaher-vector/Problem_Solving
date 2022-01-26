#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
        nn t;
        cin>>t;
        nn arr[t+1];
        for(int i=0;i<t;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0) arr[i]--;
        }
          for(int i=0;i<t;i++) cout<<arr[i]<<" ";
          cout<<endl;



}