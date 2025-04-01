#include <iostream>
using namespace std;

/*
void print1(int n) {
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cout << "*" ;
            cout << " ";
        }
        cout << endl;
    }
    
}
int main(){
    int n ;
    cin >> n ;
    print1(n);
}
    */



/*
    void print2(int n){
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 1+i ; j++)
            {
                cout << "*" << " " ;
            }
            cout << endl ;
        }
        
    }
    int main(){
        int n;
        cin >> n ;
        print2(n);
    }
        */





     /*
        void print3(int n){
            for (int i = 0; i < n; i++)
            {
                for (int j = 1; j < i+2; j++)
                {
                    cout << j ;
                }
                cout << endl;
                
            }
            
        }
        int main(){
            int n;
            cin >> n ;
            print3(n);

        }
            */







    /*
    void print4(int n){
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
               cout << i;
            }
            cout << endl;
        }
        
    }
    int main(){
        int n;
        cin >> n ;
        print4(n);
    }
        */






        /*
void print5(int n){
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << "*" << " " ;
        }
        cout << endl;
    }
}    
int main(){
    int n;
    cin >> n;
    print5(n);
}  
*/  







void print6(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print6(n);
}






