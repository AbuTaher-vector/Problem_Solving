#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int 
#define ss string
#define nl "\n"

int main()
{   
    nn n,x=0,y=0;
    ss s;
    char d='e';
    cin>>n>>s;
    for(nn i=0;i<n;i++)
    {
        if(s[i]=='S')
        {
            if(d=='e') x++;
            else if(d=='s') y--;
            else if(d=='w') x--;
            else if(d=='n') y++;

        }
        else
        {
            if(d=='e') d='s';
            else if(d=='s') d='w';
            else if(d=='w') d='n';
            else if(d=='n') d='e';

        }

    }
    cout<<x<<" "<<y<<nl;
}