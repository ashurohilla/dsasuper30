#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    bool flag;

 for( int i =2 ; i < n  ; i++){
    if (n % i == 0){
        cout<< "no is not prime"<< endl ;
        flag = 1;
        break;
         }
 if (flag == 0){
    cout<< "no is  prime "<< endl;
 }
 return 0;

 }
}