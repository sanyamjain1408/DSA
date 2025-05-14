#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool fun(int n){
    int sum = 0;
    int num = n;
    int k = to_string(n).length();
    while (n != 0)
    {
        int a = n % 10 ;

        sum = sum + (int)round(pow(a,k));

        n = n / 10;
    }
    return sum == num ;
    
}  

int main(){
    int n ;
    cin >> n;
    if (fun(n))
    {
        cout << n << " is armstong Number .";
    } else{
        cout << n << " is not armstong Number .";   
    }
    
}