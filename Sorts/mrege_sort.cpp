#include <iostream>
using namespace std;
//out put function
void output(int *array, int n){
    for(int i = 0 ; i < n ; i++){
        cout << array[i] << " " ;
    }
}
// now creating new function (mergeit)
void mergeit(int *array, int left, int middle, int right) {
   int i, j, k, nl, nr;
    //finding our 2 sub arrays length
   nl = middle - left+1;
   nr = right - middle;
   int larr[nl], rarr[nr];
    //read for main array and put it in 2 sub array (dev branch)
    for(i = 0; i<nl; i++){
      larr[i] = array[left+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[middle+1+j];
    }
   i = 0; j = 0; k = left;
    //continue from master branch here and merging arrays
     while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
    // wrong commit from dev xD now master branch
    //make sure they are okay ? :D
    while(i<nl) {       //extra element in left array
      array[k] = larr[i];
      i++; 
      k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++;
       k++;
   }
}


void mergeSort(int *array, int l, int r){
    //finding our middle index
    int m;
    
    //in this "if" we will sort our left and right array
    if(l < r){
        int m = l + (r-l)/2;
        //these two are doing recursive function until they are sorted
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);
        //this is new function for sorting our left and right array
        mergeit(array, l, m, r);
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
    // make my int main cleaner
    output(arr , n);
}