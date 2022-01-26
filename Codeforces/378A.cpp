#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{


    nn a,b,first=0,second=0,draw=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++)
    {
        if(abs(i-a)<abs(i-b)) first++;
        else if(abs(i-a)>abs(i-b)) second++;
        else draw++;
    }
    cout<<first<<" "<<draw<<" "<<second<<endl;









}