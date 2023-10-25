#include<iostream>
using namespace std;

int hexadeciamltodeciaml( string  n ){
    int ans = 0 ; 
    int x  = 1;
    int  s = sizeof( n );
    for( int i = s-1 ; i > 0 ; i-- ){

        if (n[i] >= 0 &&  n[i]<= 9){


        // do some thing 
        }
        else if (n[i] >= 'A' && n[i] <= 'F'){
            //do some thing
        }
        x *= 16;

    }
}

int main()
{
     string   n ;
     cin >>n ;
    //  cout << binarytodecimal(n) << endl;
     cout << hexadeciamltodeciaml(n) << endl;
}
    