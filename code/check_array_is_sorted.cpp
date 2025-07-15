#include <iostream>
using namespace std;

int main() { 
      cout << "Enter the Number of Array: ";
    int count;
    cin >> count;

cout << "Enter the Array:  ";

int* arr = new int[count];
for (int i = 0; i < count; i++)
{
    cin >> arr[i];
}

bool issorted = true;


for (int i = 0; i < count - 1; i++)
{
    if (arr[i] > arr[i + 1])
    {
        issorted = false;
        break;
    }
}

if (issorted )
    {
        cout << "Array is sorted" << endl;
    } 
    else
    {
        cout << "Array is Not Sorted";
    }

}