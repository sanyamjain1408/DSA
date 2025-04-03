# include <iostream>
using namespace std;

int fun(int n){
   int revnum = 0;
    while (n != 0)
    {
        int a = n % 10 ;
        revnum = (revnum * 10) + a;
        n = n / 10;
    }
    return revnum ;   
}

int main(){
    int n;
    cin >> n;
    int reversed = fun(n);
    if (n == reversed)
    {
       cout << n <<"is palindrome";
    } else{
        cout << n <<" is not palindrome .";
    }
}