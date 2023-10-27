#include<iostream>
using namespace std;

int findlargestelement( int arr[] , int n  ){ 
    int max = INT16_MIN ;
    for ( int i = 0 ; i < n  ; i ++ ){
        if (arr[ i] >   max ){
            max = arr[i];    
          }

    }
return max;


}
int main()
{
    int arr[] = { 2 ,3 , 4, 5, 6,7 ,12 };

    int n = sizeof(arr) / sizeof(arr[0]);
    cout<< findlargestelement( arr , n  )<< endl ;
}