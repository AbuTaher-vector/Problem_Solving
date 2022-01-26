#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
     nn tt;
     cin>>tt;
     while(tt--)
     {
         nn x;
         cin>>x;
         vector<nn>v;
         nn k=1;
         for(nn i=0;i<x;i++)
         {
             v.push_back(k);
             k++;
         }
         sort(v.begin(),v.end());
         reverse(v.begin(),v.end());
        for(nn i=0;i<x;i++)
         {
            if(v[i]==i+1) swap(v[i],v[i+1]);
            cout<<v[i]<<" ";
         }
         cout<<endl;
     }



}