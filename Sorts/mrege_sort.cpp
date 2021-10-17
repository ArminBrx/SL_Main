#include <iostream>
using namespace std;

// now creating new function (mergeit)
void meregeit(int *array, int left, int middle, int right){
    int i, j, flag, nleft, nright;
<<<<<<< HEAD
    //finding our 2 sub arrays length
    nleft = (middle - left) + 1;
    nright = right - middle;
=======
    flag = 1 ;
    //finding our 2 sub arrays length
    nleft = (middle - left) + 1;
    nright = right - middle;
    int leftarr[nleft], rightarr[nright];
    //read for main array and put it in 2 sub array (dev branch)
    for (i = 0 ; i < nleft ; i++){
        leftarr[i] = array[left+i];
    }
    for(j = 0 ; j < nright ; j++){
        rightarr[j] = array[middle+j];
    }
    i,j = 0;
>>>>>>> dev
}

void meregeSort(int *array, int left, int right){
    //finding our middle index
    int middle;
    //in this if we will sort our left and right array
    if(left < right){
        //these two are doing recursive function until they are sorted
        meregeSort(array, left, right);
        meregeSort(array, middle+1, right);
        //this is new function for sorting our left and right array
        meregeit(array, left, middle, right);
    }
}

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
    /* show our inputs - test 
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    } */
    // sending our array to merege function
    meregeSort(arr, 0, n-1);
}