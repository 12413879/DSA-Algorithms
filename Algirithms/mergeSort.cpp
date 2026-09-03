/*
    Merge Sort

    Merge Sort is a sorting algorithm based on the
    Divide and Conquer technique.

    How it works:
    1. Divide the array into two halves.
    2. Keep dividing each half until we get single elements.
    3. Merge the smaller arrays in sorted order.
    4. Continue merging until the complete array is sorted.

    Example:
    Array: 8 3 5 4 7 6 1 2

    Divide:
    [8 3 5 4] [7 6 1 2]

    Keep dividing:
    [8 3] [5 4] [7 6] [1 2]

    Finally, merge the elements in sorted order.

    Time Complexity:
    Best Case: O(n log n)
    Average Case: O(n log n)
    Worst Case: O(n log n)

    Space Complexity:
    O(n)

    Merge Sort is useful for sorting large amounts of data
    because its time complexity remains O(n log n).
*/

#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;

    int temp[100];

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (i = low, k = 0; i <= high; i++, k++)
    {
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {8, 3, 5, 4, 7, 6, 1, 2};
    int n = 8;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}