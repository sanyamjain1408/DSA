#include <iostream>
using namespace std;


int loop(int a){
    int x;
    x = 0;
    while (a != 0)
    {
        x = x + 1;

        a = a / 10 ;

    }
    return x;
}
int main(){
    int a ;
    cin >> a;
    int digit = loop(a);
   
    cout << "digits of " << a << " is " << digit ; 
    
}