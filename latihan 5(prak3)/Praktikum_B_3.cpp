#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    float c,f,r;

    cout << "Program konversi suhu\n";
    cout << "Masukkan derajat celcius : "; cin >> c;cout << endl;

    r = (c * 4) / 5;
    f = ((c * 9) / 5) + 32;
    
    printf("derajat farenheit  : %.2f f\n",(f));
    printf("derajat reamur     : %.2f r\n",(r));
    
    cin.get();
    return 0;
}
