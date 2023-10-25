#include<iostream>
using namespace std;
int main()
{
      int n ;
     cin >> n ;
     int originaln = n;
     int ans  = 0 ;
     while ( n > 0 ){
        int lastdigit  = n %10 ;

        ans = ans  * 10 +  lastdigit; 
        n  = n /10;

     }
     if (originaln == ans ){
        cout << " its a palindorme no "<< endl ;

     }
     else  cout << " its not a palindrome no "<< endl ;
}