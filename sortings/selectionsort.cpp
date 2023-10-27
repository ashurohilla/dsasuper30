#include<iostream>
using namespace std;

void sortedarray( int arr[] , int n ){

   for ( int i = 0 ; i < n ; i ++){
      int min = arr[i];
      for (int j = i+1 ; j < n ; j ++){
         if ( arr[j] < min){
           int  temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
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


     sortedarray(arr,  n );


}