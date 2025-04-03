#include <iostream>
using namespace std;


void fun(int i , int n){
    int count = n;
    if (i > n) return;
    count = count - i;
    cout << count << endl;
    i++;
    fun(i,n);
}
int main(){
    int n;
    cin >> n;
    fun(1,n);
}