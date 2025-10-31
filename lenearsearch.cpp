// Problem: Linear Search in an Array
// Approach: Traverse each element and compare with key
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    bool found = false;   
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i << endl;
            found = true;
            break; // Stop once found
        }
    }

    if (!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
