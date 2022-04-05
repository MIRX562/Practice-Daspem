#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int N;
    cout << "Masukkan Nilai : ";
    cin >> N;
    if(N > 50){
        cout << N <<" - 25 = ";
        N = N - 25;
        cout << N << endl;
    }else{
        cout << N <<" + 10 = ";
        N = N +10;
        cout << N << endl;
    }
    cin.get();
    return 0;
}