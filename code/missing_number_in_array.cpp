#include <iostream>
using namespace std;

int main() {
    cout << "Enter the Number of Array: ";
    int n;
    cin >> n;
    cout << "Enter the Element of Array: ";
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first = arr[0];
    cout << "Missing Number in Array is: ";
    for (int i = 0; i < n ; i++)
    {
        while (arr[i] > first)
        {
            cout << first << " ";
            first++;
        }
        first++;
    }
    
}