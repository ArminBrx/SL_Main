#include <iostream>
using namespace std;

int main(){
    //getting the size of our array
    int n ;
    cout << "Enter the number of your array please : " << endl;
    cin >> n ;
    int arr[n];
    //getting our input
    cout << "Enter the numbers please : " << endl;
    for(int i = 0; i < n ; i++){
        cin >> arr[i] ;
    }
    //show our inputs - test 
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
}