#include <iostream>
using namespace std;


    int main() {
        int n;
        cout << "Enter size of array: ";
        cin >> n;
    
        int arr[n];
    
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];  // user input
        }
    
        cout << "You entered:\n";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    
        return 0;
    }

    