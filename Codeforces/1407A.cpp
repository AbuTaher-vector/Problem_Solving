#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
       cin>>n;
        int one=0;
        int zero=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0)
                zero++;
            else{
                one++;
            }
        }
        if(zero>=one){
            cout<<zero<<"\n";
            for(int i=0;i<zero;i++)
                cout<<0<<" ";
            cout<<"\n";
        }
        else{
            if(one&1)
                one--;
            cout<<one<<"\n";
            for(int i=0;i<one;i++)
                cout<<1<<" ";
            cout<<"\n";
        }
    }
}