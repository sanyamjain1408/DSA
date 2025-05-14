#include <iostream>
using namespace std;

void insertion_sort(int n , int arr[]){
    for (int i = 0; i < n; i++)
    {
       int j = i;
       while (j > 0 && arr[j]< arr[j-1] )
       {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
       }   
    }
    cout << " Array of Insertion sort is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int n ; 
    cout << "Total Number of Element : ";
    cin >> n;
    cout << " Enter the Element of Array : ";

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertion_sort(n, arr);
    
    
}