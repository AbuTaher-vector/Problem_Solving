#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
void code()
{
    nn n;
    cin>>n;
    nn arr[n+1],ar[n+1];
    nn sum=0,summ=0;
    for(nn i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    for(nn i=0;i<n;i++)
    {
        cin>>ar[i];
        summ+=ar[i];
    }
    if(sum!=summ)
    {
        cout<<-1<<nl;
    }
    else
    {
        vector<nn>v;
        for(nn i=0;i<n;i++)
        {
            if(arr[i]!=ar[i])
            {
                 for(nn j=i+1;j<n;j++)
                 {
                    if(arr[i]>ar[i] && arr[j]<ar[j])
                    {
                        nn k=min(arr[i]-ar[i],ar[j]-arr[j]);
                        arr[i]-=k;
                        arr[j]+=k;
                        while(k--)
                        {
                            v.push_back(i+1);
                            v.push_back(j+1);

                        }

                    }
                    if(arr[i]<ar[i] && arr[j]>ar[j])
                    {
                        nn k=min(ar[i]-arr[i],arr[j]-ar[j]);
                        arr[i]+=k;
                        arr[j]-=k;
                        while(k--)
                        {
                            v.push_back(j+1);
                            v.push_back(i+1);

                        }

                    }
                    if(arr[i]==ar[i]) break;


                 } 
   
            }
            
        }
        cout<<v.size()/2<<nl;
        for(nn i=0;i<v.size();i+=2) cout<<v[i]<<" "<<v[i+1]<<nl;

    }
}
int main()
{
    nn tt;
    cin>>tt;
    while(tt--) code();
}