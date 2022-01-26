#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
#define nl "\n"
nn arr[1500];
void code()
{
    nn n;
    cin>>n;
    cout<<arr[n]<<nl;
 
}
int main()
{
    nn q=1;
    for(nn i=1;i<=2000;i++)
    {
        if(i%3!=0 && i%10!=3) arr[q++]=i;
    }
    nn tt;
    cin>>tt;
    while(tt--) code();
}