#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{

double nilai;
cout<<"masukkan nilai : ";
cin>>nilai;

if (nilai >= 80)
{
    cout<<"A"<<endl;

}else if(nilai<80 && nilai>=70){
    cout<<"B"<<endl;
}




/*

string username,password;
cout<<"masukkan username:";
cin>>username;
cout<<endl;
cout<<"masukkan password";
cin>>password;
cout<<endl;

if (username=="Ahmad"||username=="Andi" && password=="123")
{
    cout<<"Selamat datang "<<username<<endl;
}else{
    cout<<"username atau password salah";
}
*/

    cin.get();
    return 0;
}
