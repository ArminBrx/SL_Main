#include <iostream>
using namespace std;

// now creating new function (mergeit)
void mergeit(int *array, int left, int middle, int right){
    int i, j, k, nl, nr;
    //cout << "im here" ;
//<<<<<<< HEAD
    //finding our 2 sub arrays length
    nl = (middle - left) + 1;
    nr = right - middle;
   // cout << "test it "<<nl << nr << "booo" ;
    int larr[nl], rarr[nr];
//=======
    //read for main array and put it in 2 sub array (dev branch)
    for (i = 0 ; i < nl ; i++){
        //cout << i ;
        larr[i] = array[left+i];
    }
    for(j = 0 ; j < nr ; j++){
        //cout << "22" ;
        rarr[j] = array[middle+1+j];
    }
    //cout<< nl << nr ;
    i = 0 ; j = 0; k = 1 ; 
    //cout<< i << j ;
    //continue from master branch here and merging arrays
    while( i < nl && j < nr){
        if(larr[i] <= rarr[j]) {
            array[k] = larr[i];
            i++;
            //cout <<"44";
        }else{
            array[k] = rarr[j];
            j++;
        }
        k++;
       // cout << "im here 2 " ;
    }
//>>>>>>> dev
    // wrong commit from dev xD now master branch
    //make sure they are okay ? :D
    while(i < nl){
        array[k] = larr[i];
        i++;
        k++;
    }
    while(j < nr){
        array[k] = rarr[j];
        j++;
        k++;
    }
}


void mergeSort(int *array, int left, int right){
    //finding our middle index
    int middle;
    
    //in this if we will sort our left and right array
    if(left < right){
        int middle = left + (right-left)/2;
        //cout<< " im here";
        //these two are doing recursive function until they are sorted
        mergeSort(array, left, middle);
        mergeSort(array, middle+1, right);
        //this is new function for sorting our left and right array
        mergeit(array, left, middle, right);
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

    // sending our array to merege function
    mergeSort(arr, 0, n-1);
    // show our inputs 
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
}