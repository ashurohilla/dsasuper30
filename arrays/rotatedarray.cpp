#include<iostream>
using namespace std;
void rotatearray( int array[] , int n ){ 

int firstelement = array[0];
 for (int i = 0 ; i <= n; i++) {
    array[i] = array[i + 1];

}
array[n] = firstelement;

 for (int i = 0 ; i <= n; i++) {
  cout << array[i] << endl;
}



}


int main()
{
    int array[] = { 2, 3, 4,5 , 6, 7, 8,9}; 
    int n = sizeof(array)/ sizeof( array[0]);
    rotatearray (array , n ); 

}