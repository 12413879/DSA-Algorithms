// Problem: Reverse an array
// Approach: Two-pointer swap
// Time Complexity: O(n), Space Complexity: O(1)

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    cout << "Original array: ";
    for(int k = 0; k < n; k++){
        cout << arr[k] << " ";
    }
    cout << endl;
    int i = 0, j = n-1;
    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    cout << "Reverse array: ";
    for(int k = 0; k < n; k++){
        cout << arr[k] << " ";
    }
    cout << endl;
    return 0;
}