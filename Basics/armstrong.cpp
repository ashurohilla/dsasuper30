#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
     if (n < 0) {
        cout << "Invalid input! Please enter a non-negative number." << endl;
        return 0;
    }
    int originaln = n ;

    int sum = 0 ;
    while ( n > 0 ){
        int lastdigit = n % 10;
         cout<<lastdigit<<endl;
         sum += pow(lastdigit, 3);

         // there is slight miss conseption in power function it giver cube of 5 124  i dont knwo why but it gives;
         int check = pow(5 ,3);
         cout<< check << "checking 5 power"<< endl;
         cout<< sum << endl;
         
         n = n /10;
        

    } 
    if ( sum == originaln){
        cout << " armstrong no  "<< endl;

    }
    else{
        cout<< "not an  armstrong no "<< endl;
    }
    return 0;
}