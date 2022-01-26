#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,sum=0,sum1=0;
        vector<int>a;
        cin>>x;
        for(int i=1;i<=x;i++) a.push_back(pow(2,i));
       reverse(a.begin(),a.end());
         for(int i=0;i<a.size();i++)
         {
             if(i==0 || i>x/2) sum+=a[i];
             else sum1+=a[i];
         }
         cout<<sum-sum1<<endl;
         while(a.size()!=0) a.erase(a.begin()+0);
    }
}