#include <iostream>
using namespace std;

int main(){
     int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter all elements: " << endl;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j <= n; j++){
            if(arr[i] == arr[j]){
                cout << "Duplicate element: " << arr[i] << endl;
                break;
            }
        }
    }
    return 0;
}