#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter elements of the matrix:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int t;
    cout << "Enter the target element: ";
    cin >> t;

    // Assuming matrix is sorted row-wise and column-wise
    int i = 0, j = n - 1;
    bool found = false;

    while(i < n && j >= 0) {
        if(matrix[i][j] == t) {
            cout << "Target element found at position: (" << i << ", " << j << ")" << endl;
            found = true;
            break;
        }
        else if(matrix[i][j] > t) {
            j--; 
        }
        else {
            i++; 
        }
    }

    if(!found) {
        cout << "Target element not found." << endl;
    }

    return 0;
}
