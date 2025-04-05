#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "kitne number rakh ne hai arry me : " ;
    cin >> n;
    int* arr = new int[n] ;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << " sabse bada number : " << max  << endl;
    cout << " sabse chota number : " << min ;
    
    
}