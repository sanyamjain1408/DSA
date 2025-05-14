#include <iostream>
using namespace std;

int main(){
    int n;
    cout << " Total Number of Element in Array : ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Number of index " << i+1 << " : ";
        cin >> arr[i];
    }

    int hass[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hass[arr[i]]++;
       
        
    }
    int q ;
    cout << "kitne number check kar ne hai : ";
    cin >> q ;
    cout << "jo number check kar ne hai vo dalo  : ";
    int number;
    while (q--)
    {
        cin >> number;
        cout << number << "->" << hass[number] << " " << endl;
    }
    
    
    return 0;
}