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

   int index = 0;
   for (int i = 0; i < count; i++)
   {
    if (arr[i] != 0)
    {
        arr[index] = arr[i];
        index++;
    }
   }

   while (index < count)
   {
    arr[index] = 0;
    index++;
   }

   cout << " Array after move zero to end is : ";
   for (int i = 0; i < count; i++)
   {
    cout << arr[i] << " ";
   }
   
   
   
}