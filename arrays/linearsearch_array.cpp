#include<iostream>
using namespace std;

int searcharray(int arr[] , int n , int  num ){
    for ( int i = 0 ; i < n ; i++){
        if ( arr[i] ==  num ) return i;
    }
    return -1 ;
}
int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num ; 
    cin >> num ;
    cout << searcharray(arr,n , num);
    return 0;
}