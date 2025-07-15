#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cout << "Enter the Number of Array: ";
    int count;
    cin >> count;

    int* arr = new int[count];
    cout << "Enter the Array: ";
    for (int i = 0; i < count; i++) {
        cin >> arr[i];
    }

    // Step 1: Sort the array
    sort(arr, arr + count);

    // Step 2: Print unique elements
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < count; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            cout << arr[i] << " ";
        }
    }

    delete[] arr;
    return 0;
}
