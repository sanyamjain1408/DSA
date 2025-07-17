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
   
    cout << "Element that appears only once in tha array is: ";
    for (int i = 0; i < n ; i++)
    {
        bool isunique = true;
        for (int j = 0; j < n; j++)
        {
            if (i != j  && arr[i] == arr[j])
            {
                isunique = false;
                break;
            }
            
        }
        
        if (isunique)
        {
            cout << arr[i] << " ";
        }
        
        
    }
    
}