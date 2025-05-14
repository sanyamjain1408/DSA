#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    if (n ==  0)
    {
        cout << "0";
    }else if (n == 1)
    {
        cout << "0" << " " << "1";
    }else{
        int* fab = new int[n];
        fab[0] = 0;
        fab[1] = 1;
        for (int i = 2; i <+ n; i++)
        {
            fab[i] = fab[i - 1] + fab[i - 2];
        }
        cout <<" Fibonacci Series of " << n << " is " ;
        for (int i = 0; i < n; i++)
        {
            cout  << fab[i] << " , ";
        }
        
        
    }
    
    

}




