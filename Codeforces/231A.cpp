#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,k=0;
    cin>>t;

    while(t--)
    {
         int j=0;

        for(int i=0;i<3;i++)
        {
            cin>>a;
            if(a==1)  j++;
        }
        if(j>=2)  k++;
    }
    cout<<k<<endl;
}