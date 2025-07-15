#include <iostream>
using namespace std;

int main(){
    cout << "Enter the Number of Array: ";
    int count;
    cin >> count;

cout << "Enter the Array:  ";

int* arr = new int[count];
for (int i = 0; i < count; i++)
{
    cin >> arr[i];
}

int max = arr[0];

for (int i = 0; i < count; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
        
    }
    
}
cout << "Largest Number is : "<< max ;


}
