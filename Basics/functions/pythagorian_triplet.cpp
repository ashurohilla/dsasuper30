#include<iostream>
using namespace std;

bool check ( int x ,int  y,  int z ){

    int a = max ( x , max( y , z ));
    int b , c ;
    if ( a == x ){
        b = y;
        c = z ;
    }
    else if ( a == y ){
        b = x  ; 
        c = z;
    }



else if ( a == z ){
    b = x ;
    c = y ;
}
   if ( a*a == b*b + c*c )
    return  true;
   
   else
    return false ;
   

}

int main()
{
    int x , y , z ;
    cin >>x >> y  >> z;
    if ( check( x , y ,z )){

        cout << " its a pythagorian triplet"<< endl ;
    }
    else { 
        cout << " not a pythagorain triplet"<< endl; 
    }

}