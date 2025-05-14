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

    bool isMagic = true;

    int magicSum = 0;
    for(int j = 0; j < n; j++) {
        magicSum += matrix[0][j];
    }
    

    // Sum of rows
    for(int i = 0; i < n; i++) {
        int rowSum = 0;
        for(int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of Row " << i + 1 << ": " << rowSum << endl;
        
        if(rowSum != magicSum) isMagic = false;
    }

    // Sum of columns
    for(int j = 0; j < n; j++) {
        int colSum = 0;
        for(int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        cout << "Sum of Column " << j + 1 << ": " << colSum << endl;
       
        if(colSum != magicSum) isMagic = false;
    }

    // Main Diagonal sum
    int mainDiagonal = 0;
    for(int i = 0; i < n; i++) {
        mainDiagonal += matrix[i][i];
    }
    cout << "Main Diagonal Sum: " << mainDiagonal << endl;
    
    if(mainDiagonal != magicSum) isMagic = false;

    // Anti-diagonal sum
    int antiDiagonal = 0;
    for(int i = 0; i < n; i++) {
        antiDiagonal += matrix[i][n - i - 1];
    }
    cout << "Anti-Diagonal Sum: " << antiDiagonal << endl;
   
    if(antiDiagonal != magicSum) isMagic = false;

    if(isMagic == true) {
        cout << "It is a Magic Square!" << endl;
    } else {
        cout << "It is NOT a Magic Square." << endl;
    }

    return 0;
}
