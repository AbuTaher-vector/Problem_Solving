#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,den;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(k=2;;k++)
        {
            den=pow(2,k)-1;
            if(n%den==0)
            {
                cout<<n/den<<endl;
                break;
            }
        }

    }
}