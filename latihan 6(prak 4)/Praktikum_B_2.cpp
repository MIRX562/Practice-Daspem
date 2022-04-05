#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int N;
    cout << "Masukkan Nilai : ";
    cin >> N;
    if(N % 2 == 0){
        cout << "GENAP\n";
    }else{
        cout << "GANJIL\n";
    }
    cin.get();
    return 0;
}