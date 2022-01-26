#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
int main()
{
        nn tt,one=0,two=0,three=0;
        cin>>tt;

         int arr[tt+1];
         for(int i=0;i<tt;i++) cin>>arr[i];
          for(int i=0;i<tt;i++)
          {
              if(arr[i]==1) one++;
              else if(arr[i]==2) two++;
              else if(arr[i]==3) three++;
          }
          cout<<tt-max(one,max(two,three))<<endl;

}