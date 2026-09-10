/* 1. What is Linear Search?
   Linear Search is a simple searching algorithm that checks each element of an array one by one 
     until the required  element is found or the array ends.


2. How does it work?
Start from the first element.
Compare the current element with the target.
If both are equal → element found.
Otherwise, move to the next element.
Continue until the element is found or the array ends.
*/

#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int k){
  bool found = false;

  for(int i = 0; i < n; i++){
    if(arr[i] == k){
      found = true;
      cout << "Element found at index: " << i << endl;
      break;
    }
  }

  if(!found){
    cout << "Element not found in this array.";
  }

}

int main(){
  int n = 6;
  int arr[n] = {5, 3, 7, 1, 8, 4};
  int key = 1;

  linearSearch(arr, n, key);

  return 0;
}

/*
Time Complexity ⭐
Best Case — O(1)
Average Case — O(n)
Worst Case — O(n)

Space Complexity = O(1)
*/