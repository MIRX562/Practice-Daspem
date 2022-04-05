#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int nilai;
    cout << "masukkan nilai mata kuliah" << endl;
    cin >> nilai;
    if(nilai >= 60){
        cout << "Lulus\n";
    } else {
        cout << "Gagal\n";
    }
    cin.get();
    return 0;
}
// 80,100,40,50,60,61,150,-80
