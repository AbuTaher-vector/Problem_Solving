#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn tt,flag=0;
    set<nn>s;
    cin>>tt;
    vector<nn>v;
    nn arr[tt+1];
    for(int i=0;i<tt;i++) cin>>arr[i];
    for(int i=0;i<tt;i++)
    {
        flag=0;
               for(int j=i+1;j<tt;j++)
              {
                 if(arr[i]==arr[j])
                 {
                     flag=1;
                     break;
                 }
             }
             if(flag==0) v.push_back(arr[i]);
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;

}