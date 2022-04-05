#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    string nama;
    int nim;
    float nilai;

    cout << "===============Masukkan Nama Mahasiswa===============" << endl;
    cin >> nama;
    cout << "===============Masukkan NIM Mahasiswa===============" << endl;
    cin >> nim;
    cin >> nilai;
    cout<<nama<<"\t:\t"<<nim<<endl;
    printf("nilai\t:\t%.2f",(nilai),"\n");
    
    cin.get();
    return 0;
}
