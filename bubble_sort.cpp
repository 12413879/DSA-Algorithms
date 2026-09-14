/*
    What is Bubble Sort?
    Bubble Sort is a sorting algorithm that repeatedly compares
    adjacent elements and swaps them if they are in the wrong order.

    How it works:
    1. Compare two adjacent elements.
    2. If the left element is greater, swap them.
    3. Continue comparing the remaining adjacent elements.
    4. After each pass, the largest unsorted element moves to the end.
    5. Repeat until the array is sorted.

    Use When:
    1. You want to learn a simple sorting algorithm.
    2. The array is small.
*/


#include <iostream> 
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n){
  for(int i = 0; i < n-1; i++){
    for(int j = 0; j < n - i - 1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
    }
  }

  cout << "Sorted array: ";

  for(int i = 0; i< n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
  int n = 7;
  int arr[n] = {7, 8, 4, 6, 9, 3, 1};

  bubbleSort(arr, n);
}


/*
    Time Complexity:
    Best Case    : O(n)       // Optimized version
    Average Case : O(n^2)
    Worst Case   : O(n^2)

    Space Complexity:
    O(1)
*/