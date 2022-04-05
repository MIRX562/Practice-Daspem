#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int nilai;
    cout << "masukkan nilai mata kuliah" << endl;
    cin >> nilai;
    if(nilai <= 0 || nilai >= 100){
        cout << "Periksa Inputan Anda\n";
    }else if(nilai <= 45){
        cout << "Gagal\n";
        cout << "Grade E\n";
    }else if(nilai <= 60){
        cout << "Gagal\n";
        cout << "Grade D\n";
    }else if(nilai <= 75){
        cout << "Lulus\n";
        cout << "Grade C\n";
    }else if(nilai <= 85){
        cout << "Lulus\n";
        cout << "Grade B\n";
    }else if(nilai <= 100){
        cout << "Lulua\n";
        cout << "Grade A\n";
    }
    cin.get();
    return 0;
}// 80,100,40,50,60,61,150,-80