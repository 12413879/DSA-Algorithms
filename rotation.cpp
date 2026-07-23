// Rotation of array
// Time-compleity = 0(n)
// Space-complexity = 0(1)   
#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int key = 3;

// Step1: Revere the whole array........ 
  int i = 0, j = n-1;
    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
   
// Step2: Reverse the array from "0" index to "key-1"........
int k = 0, l = key-1;
    while(k < l){
        swap(arr[k], arr[l]);
        k++;
        l--;
    }
// Step3: Reverse the array from "Key" index to "n-1"........
int m = key, o = n-1;
    while(m < o){
        swap(arr[m], arr[o]);
        m++;
        o--;
    }
// ......Final rorated array.........
cout << "Rotated array: " ;
 for(int k = 0; k < n; k++){
       cout <<  arr[k] << " ";
    }
    
}