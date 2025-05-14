#include <iostream>
using namespace std;


void fun(int i , int n){
    if (i > n) return;
    cout << "sanyam" << endl;
    i++;
    fun(i,n);
}
int main(){
    int n;
    cin >> n;
    fun(1,n);
}