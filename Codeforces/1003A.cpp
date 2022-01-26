#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define string ss
int main()
{
        nn t,cnt=1;
        cin>>t;
        nn arr[t+1];
        vector<nn>v;
        for(int i=0;i<t;i++) cin>>arr[i];
        sort(arr,arr+t);
         for(int i=0;i<t;i++)
         {
             if(arr[i]==arr[i+1]) cnt++;
             else
             {
                  v.push_back(cnt);
                 cnt=1;
             }
         }
         v.push_back(cnt);
         sort(v.begin(),v.end());
         reverse(v.begin(),v.end());
         cout<<v[0]<<endl;
}