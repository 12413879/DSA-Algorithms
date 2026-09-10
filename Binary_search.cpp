/*  What is Binary Search?
    Binary Search is a searching algorithm that repeatedly divides
    a sorted array into two halves and checks the middle element.

    How it works:
    1. Find the middle element.
    2. If the middle element is the target, the search is complete.
    3. If the target is greater, search in the right half.
    4. If the target is smaller, search in the left half.
    5. Repeat until the element is found or the search range becomes empty.

    Use When:
    1. The array is sorted.
    2. You want faster searching.
 */

#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int k){
  int low = 0, high = n-1;
  bool found = false;

  while(low <= high){
    int mid = (low + high)/2;
    if(arr[mid] == k){
      cout << "Element found at index: " << mid << endl;
      found = true;
      break;
    }else if(arr[mid] < k){
      low = mid+1;
    }else{
      high = mid-1;
    }
  }

  if(!found){
    cout << "Element not found...";
  }
}

int main(){
  int n = 6;
  int arr[n] = {2, 3, 5, 6, 8, 9};
  int key = 8;

  binarySearch(arr, n, key);

  return 0;
}

/*
 Time Complexity:
    Best Case    : O(1)
    Average Case : O(log n)
    Worst Case   : O(log n)

    Space Complexity:
    O(1)
*/