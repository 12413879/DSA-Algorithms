//  Total-Time-Complexity =  O(n^2)
//  Total space-complexity = o(1)

#include <iostream>
using namespace std;

int main(){
    int r = 3;
    int c = 3;
    int arr[r][c] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//            ............ original array................        [Just output - No impact on complexity]
    cout << "Original array: " << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // ...........................Transpose .............     [for transpose  T.C = O(n^2)]
    for(int i = 0; i < r; i++){
        for(int j = i+1; j < c; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }


//    ....................Reverse each row...............   [For reversing  T.C = O(n^2)]
for(int i = 0; i < r; i++){
int left = 0, right = c-1;

while(left < right){
    swap(arr[i][left], arr[i][right]);
    left++;
    right--;
}
}




//         ................Now (90 degree) rotated final 2D-array..............       [Just output - No impact on complexity]
cout << "Final (90 degree) rotated 2D-Array: " << endl;
for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

return 0;
}