#include<fstream>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream file;
    file.open("test.txt");
    file << "halo dunia"<<endl;
    file << "halo dunia"<<endl;
    file << "halo dunia"<<endl;
    file << "halo dunia"<<endl;
    file << "halo dunia"<<endl;
    file << "halo dunia"<<endl;
    
    for(int i=0;i<=10;i++){
        file << "berhitung " << i << endl;
    }
    string isi;
    cout<<getline(file,isi);
    cout<<isi<<endl;
    file.close();


    return 0;
}
