#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{

       nn tt,chest=0,biceps=0,back=0;
       cin>>tt;
       nn arr[tt+1];
       for(int i=1;i<=tt;i++) cin>>arr[i];
       for(int i=1;i<=tt;i++)
       {
           int a=i%3;
          if(a==1) chest+=arr[i];
          else if(a==2) biceps+=arr[i];
          else back+=arr[i];
       }
     if(chest>biceps  && chest>back) cout<<"chest"<<endl;

    else if(biceps>back && biceps>chest) cout<<"biceps"<<endl;

     else cout<<"back"<<endl;

}