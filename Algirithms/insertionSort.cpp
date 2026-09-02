 /*Insertion Sort

    Insertion Sort is a simple sorting algorithm.
    It works by building the sorted part of the array
    one element at a time.

    How it works:
    1. Start from the second element.
    2. Compare it with the elements before it.
    3. Shift larger elements one position to the right.
    4. Insert the current element at its correct position.

    Example:
    Array: 5 3 4 1

    After first pass: 3 5 4 1
    After second pass: 3 4 5 1
    After third pass:  1 3 4 5 
 
  Time Complexity:
      Best Case: O(n)
      Average Case: O(n^2)
      Worst Case: O(n^2)

      Space Complexity:
      O(1)

    Insertion Sort is useful for small or nearly sorted arrays.

*/
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
  
  for(int i = 1; i < n; i++){
    int key = arr[i];
    int j = i-1;

    while(j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];
      j--;
    }

    arr[j + 1] = key; 
  }

  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
}

int main(){
  int arr[] = {9, 7, 2, 0, 1, 6, 11, 5};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout << "Unsorted Array: ";
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  cout << "After Insertion Sort: ";
  insertionSort(arr, n);

  return 0;
}
