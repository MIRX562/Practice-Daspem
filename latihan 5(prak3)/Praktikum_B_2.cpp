#include <iostream>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[]){
    
    cout << "program menghitung volume bola\n";
    float v,r,phi;
    phi = 3.24;

    cout << "Masukkan jari-jari : "; cin >> r; cout<<endl;
    v = (4/3)*phi*pow(r,3);

    printf("Volume lingkaran = %.3f",(v),"\n");        
    
    cin.get();
    return 0;
}
