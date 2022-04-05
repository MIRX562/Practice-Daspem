#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    string nama;
    int nim;
    cout << "===============Masukkan Nama Mahasiswa===============" << endl;
    cin >> nama;
    cout << "===============Masukkan NIM Mahasiswa===============" << endl;
    cin >> nim;
    
    cout<<nama<<":\t"<<nim<<endl;
    
    cin.get();
    return 0;
}
