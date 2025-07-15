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

    int temp = arr[count - 1];; 
    

    for (int i = count - 1; i >= 0; i--)
    {
          arr[i] = arr[i - 1];
    }
    
    arr[0] = temp;
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    
}