#include<iostream>
using namespace std;

void   print1ton( int sum ,  int i  ){
    if ( i  <   1  ) {
        cout<< sum ;
        return ;
    }
    print1ton( sum + i , i- 1);

    

}

int main()
{
    int n ; 
    cin >> n ; 
    print1ton( 0, n  );
    return 0 ;

}