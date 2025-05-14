#include <iostream>
using namespace std;



int main(){
    int n;
    cout << "Total Number of Element : ";
    cin >> n;
    cout << "Enter the Element of Array : ";

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }   
        }
        cout << arr[i] << " ";
    }

    
}

