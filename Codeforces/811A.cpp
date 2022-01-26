#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
#define ss string
int main()
{
    nn a,b;
    cin>>a>>b;
    nn x=1;
    while(1)
    {
        if(x%2!=0)   a-=x;
        if(x%2==0)  b-=x;
        if(b<0)
        {
            cout<<"Valera"<<endl;
            break;
        }
        else if(a<0)
        {
            cout<<"Vladik"<<endl;
            break;

        }
        x++;
    }


}