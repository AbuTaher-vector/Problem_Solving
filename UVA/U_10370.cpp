#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
void code()
{
    nn x;
    cin>>x;
    nn arr[x+1];
    nn sum=0;
    for(nn i=0;i<x;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+x);
    reverse(arr,arr+x);
    sum=sum/x;
    dd cnt=0;
    for(nn i=0;i<x;i++)
    {
        if(arr[i]>sum) cnt++;
        else break;
    }
    dd ans = (cnt/x*1.0)*100;
    printf("%.3lf",ans);
    cout<<"%"<<"\n";

}
int main()
{
	nn tt;
    cin>>tt;
    while(tt--) code();
}