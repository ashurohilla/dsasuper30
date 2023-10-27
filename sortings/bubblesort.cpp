#include<iostream>
using namespace std;

void bubblesortarray( int arr[] , int n ){

    for ( int i = 0 ; i< n ; i++){

        for ( int j =  0 ; j < n ; j ++){
            if (arr[j] > arr [j + 1]){
               int  temp = arr [ j + 1];
                arr[j+1] = arr [ j ];
                arr[ j ] = temp ;

            }
        }

    }
     for ( int i = 0 ; i< n ; i++){
         cout<< arr[i]<< endl;
      }
}
int main()
{
   int n ;
    cin >> n ;
     int arr[n];
     for (int i = 0; i < n ; i ++){
        cin >> arr[i];
     }


     bubblesortarray(arr,  n );


}