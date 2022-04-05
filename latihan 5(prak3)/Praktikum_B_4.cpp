#include <iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[]){
    
    float a,t,m;
                                              
    cout << "Program menghitung sisi miring segitiga siku-siku\n";
    cout << "masukkan panjang alas : "; cin >> a;cout << endl;    
    cout << "masukkan tinggi       : "; cin >> t;cout << endl;

    m = sqrt(pow(a,2)+pow(t,2));    
    cout << "sisi miring = " << m <<endl; 

    cout <<      "\n  |\\" ;
    cout <<      "\n  | \\ " << endl;
    cout << t << "\n  |  \\" << m;
    cout <<      "\n  |   \\";
    cout <<      "\n  |____\\";
    cout <<      "\n    " << a << endl;

    cin.get();
    return 0;
}
