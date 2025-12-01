#include <iostream>
using namespace std;
//-------------------------------------Recursion ----------------------


//  ------------------------------(1)-PRINT NUMBER N TO 1 -----------
void printnum(int n){

    if(n == 0) return;

    cout << n << " ";
    printnum(n-1);
}

int main(){
    int n;

    cout << "Enter value of n: ";
    cin >> n;

    printnum(n);
    return 0;
}