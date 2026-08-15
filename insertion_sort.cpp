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
