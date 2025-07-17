#include <iostream>
#include <set>
using namespace std;

int main()
{
    cout << "Enter the Number of Element in m array: ";
    int m;
    cin >> m;

    cout << "Enter the Element of m Array:  ";

    int* arr1 = new int[m];
    for (int i = 0; i < m; i++)
  {
    cin >> arr1[i];
  }

   cout << "Enter the Number of Element in n array: ";
    int n;
    cin >> n;

    cout << "Enter the Element of n Array:  ";

   int* arr2 = new int[n];
   for (int j = 0; j < n; j++)
   {
     cin >> arr2[j];
   }

   set <int> unionset;

   for (int i = 0; i < m; i++)
   {
     unionset.insert(arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
      unionset.insert(arr2[i]);
    }

    cout << "Union of both array is: ";
    for (int x : unionset) 
    {
      cout << x << " ";
    }
}