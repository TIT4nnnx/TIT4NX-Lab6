#include<iostream>
using namespace std;

int main(){
    int NumUser;
    int Even;
    int Odd;
    
    Even = 0; 
    Odd = 0;
    
    cout << "Enter an integer: ";
    cin >> NumUser ;
    
    while( NumUser != 0 ){
        
        if(NumUser%2==0){
            Even = Even+1;
        }
        else{
            Odd = Odd+1;
        }
        cout << "Enter an integer: ";
        cin >> NumUser ;
    }
    
    cout << "#Even numbers = " << Even << "\n" ;
    cout << "#Odd numbers = " << Odd << "\n"  ;
    return 0;
}

