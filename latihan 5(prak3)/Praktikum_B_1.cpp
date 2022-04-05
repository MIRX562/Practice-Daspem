#include <iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[]){
    
    float jari_jari,luas_lingkaran,phi;
    phi = 3.14;
    
    cout << "Program menghitung luas lingkaran" << endl;
    cout << "Masukkan Jari-jari : "; cin >> jari_jari; cout << endl;

    luas_lingkaran = phi*pow(jari_jari,2);

    printf("luas lingkaran = %.1f",(luas_lingkaran),"\n");
    
    
    cin.get();
    return 0;
}
