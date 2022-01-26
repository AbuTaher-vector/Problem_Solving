#include<bits/stdc++.h>
using namespace std;

#define pi 2.0*acos(0.0)
 using namespace std ;
 int main ()
 {
     int t , i  ;
     cin>>t ;
     for (i=1 ; i<=t ; i++)
     {
         double x , n , R ,r ;
         cin >> R >> n;
         x=sin(pi / n);
         r=(x * R) / (1 + x) ;
         cout << setprecision(10) << "Case " << i << ": " << r <<endl ;
     }
     return 0 ;
 }