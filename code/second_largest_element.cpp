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
int second_max = -1;

for (int i = 0; i < count; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
     }
    
}

for (int i = 0; i < count; i++)
{
    if (arr[i] > max )
    {
          max = arr[i];
    }
}


for (int i = 0; i < count; i++)
{
    if (arr[i] != max && arr[i] > second_max)
    {
        second_max = arr[i];
    }
    
}

cout << "Largest Number is : "<< max << endl;;
cout << "Second Largest Number is : " << second_max ;


}
