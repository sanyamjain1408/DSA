#include <iostream>
using namespace std;


bool fun(int n){
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            a = a + 1;
        }

        if (a == 2)
        {
            return true;
        }else{
            return false;
        }
        
    }
    
}

int main(){
    int n ;
    cin >> n;
    bool sam = fun(n);
    if (sam)
        {
            cout << n << " is prime number . it has two divisors: 1 and " << n ;
        }else{
            cout << n << " is not prime number";
        }
    
}