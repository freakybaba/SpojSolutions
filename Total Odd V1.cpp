#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 1000001
#define INT_SIZE 32 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z i,j,k;
int main() 
    {
    fast;
    z a,b,p,q;
    cin>>a>>b;
    if(a%2==0 && b%2==0)
      cout << (b-a)/2;
    else
      cout << ((b-a)/2)+1;
    // z t;
    // cin >> t;
    // while( t-- )
    //   {
    //       z a,b,c,d,e;
    //       cin>>a>>b>>c>>d>>e;
    //       z ts = a*c+b*d+e+10;
    //       if(24-ts>=3)
    //       cout <<"Khushi"<<endl;
    //       else
    //       cout <<"Hotash"<<endl;
    //   }
    //cout << "Thank You, Avengers";
    return 0;
}




  
