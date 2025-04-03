#include <iostream>
using namespace std;

int fun(int n){
    int revnum = 0;
while (n != 0)
{
    int a = n % 10;
    
    revnum = (revnum * 10) + a ;
    n = n / 10 ;
}
return revnum ;


}

int main(){
    int n;
    cin >> n;
    int revrsed = fun(n);
    cout << "Reversed Number is "<< revrsed ; 
    
    
}