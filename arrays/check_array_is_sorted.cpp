// check the  given array is sorted or not 

#include<iostream>
using namespace std;

bool checkarray(int arr[], int n) {
  for (int i = 1 ; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}
int main()
{
    int arr[] = { 1,2 ,3 ,4, 5, 6 ,7 ,8 ,9 ,10};
    int  n = sizeof(arr) / sizeof(arr[0]);
    bool ans = checkarray( arr , n );
    if ( ans) cout<< " yes array is sorted ";
    else cout << " array is not sorted ";

    
}