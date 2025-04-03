# include <iostream>
using namespace std;

int fun(int N1 , int N2 ){
    int gcf = 1;
    for (int i = 1; i < min(N1, N2); i++)
    {
        if (N1 % i == 0 && N2 % i == 0)
        {
            gcf = i ;
        }   
    }
    return gcf;
}


int main(){
    int N1 , N2 ;
    cin >> N1 >> N2 ;
    int sun = fun(N1 , N2);
    cout << "GCF of " << N1 << " and " << N2 << " is " << sun;
}