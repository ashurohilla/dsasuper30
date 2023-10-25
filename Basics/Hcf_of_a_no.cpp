#include<iostream>

using namespace std;
int findhcf( int a , int b ){
    int ans ; 

     for ( int i =  1 ; i <= min ( a , b ) ; i++ ){ 
        if ( a % i == 0 && b % i == 0 ){
            ans = i ;
        }
        
     }
    cout << " the gcd of two no is "<<  ans << endl ;
    return ans ; 

}
int findhcfoptimal (int a, int b) {
	if (b == 0) {
		return a;
	}
	return findhcfoptimal(b, a % b);
}

int main()
{
     int a ;  
     int b ; 

     cin >> a;
     cin >> b ;
     findhcf( a , b );
     cout <<"The GCD of the two numbers is "<<findhcfoptimal(a, b);

}