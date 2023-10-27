#include<iostream>
using namespace std;
int main()
{
    int n , m ;
    cin >> n >> m ;
    int num ;
    cin >> num ;
    int arr [n][m];
    for ( int i = 0 ; i < n ; i++ ){

        for ( int j = 0 ; j < m ; j++ ){
            cin >> arr[i][j];
        }
    }

     for ( int i = 0 ; i < n ; i++ ){

        for ( int j = 0 ; j < m ; j++ ){
            if ( arr[i][j] == num ){
                cout<< "element found at index "<< i << j ;  
                break; 
                
        }

    }
    }
        cout<< "Element not found at anywhere";      



    
}