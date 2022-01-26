#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,fact=0,fact2=0;
    cin>>n;
    for(i=4;i<n;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                fact=1;
                break;
            }
        }
        if(fact==1)
        {
          k=n-i;
          for(l=2;l<=k/2;l++)
             {
            if(k%l==0)
               {
                fact2=1;
                break;
                }
            }

        }
        if(fact==1 && fact2==1){
           cout<<i<<" "<<k<<endl;
             break;
        }
        fact=0;fact2=0;

    }
}