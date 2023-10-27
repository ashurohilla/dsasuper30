#include<iostream>
using namespace std;
void rotatearray( int array[] , int n ){ 

 for (int i = 0 ; i < n; i++) {
    if ( array[i] == 0){
        for (int j = i ; j < n ; j ++ ){
            array[j] = array [j+1];
        }
    array[n-1] = 0;
    }

}

 for (int i = 0 ; i <= n; i++) {
  cout << array[i] << endl;
}

}
int main()
{
    int array[] = { 2, 3, 0,8 , 6, 10, 0,9}; 
    int n = sizeof(array)/ sizeof( array[0]);
    rotatearray (array , n ); 

}