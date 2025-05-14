#include <iostream>
using namespace std;

void bubble_sort(int n , int arr[]){
    for (int i = 0; i < n; i++)
    { 
        for (int j = 0; j < n -i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout  << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Total Number of Element : ";
    cin >> n;
    cout << " Enter the Element of Array : ";

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(n, arr); 
}