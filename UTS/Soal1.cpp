#include<iostream>

#include<cmath>

#include<iomanip>

using namespace std;

int main () {

float hasil,suhu;

int pilihan;

cout<<"\n\tPROGRAM KONVERSI SUHU\n\n";

cout<<"-Celcius    [ C ]\n";

cout<<"-Fahrenheit [ F ]\n";

cout<<"-Reamur     [ R ]\n";

cout<<"-Kelvin     [ K ]\n\n";

cout<<"1.C -> F\n";

cout<<"2.F -> C\n";

cout<<"3.R -> F\n";

cout<<"4.F -> R\n";

cout<<"5.K -> C\n";

cout<<"6.K -> F\n";

cout<<"7.K -> R\n";

cout<<"8.C -> K\n";

cout<<"9.F -> K\n";

cout<<"10.R -> K\n";

cout<<"Masukan Pilihan anda :";

cin>> pilihan;

switch (pilihan) {

case 1:

    cout<<"Masukan suhu dalam celcius :";

    cin>>suhu ;

    hasil=9/5*suhu+32;

    cout<<"Suhu dalam Fahrenheit =" << hasil << endl;

    break;

case 2:

    cout<<"Masukan suhu dalam Fahrenheit :";

    cin>>suhu ;

    hasil=5/9*(suhu-32); 
    cout<<"Suhu dalam celcius =" << hasil << endl;

    break;

case 3:

    cout<<"Masukan suhu dalam Reamur :";

    cin>>suhu ;

    hasil=(9/4*suhu)+32; 
    cout<<"suhu dalam Fahrenheit =" << hasil << endl;

    break;

case 4:

    cout<<"Masukan suhu dalam Fahrenheit :";

    cin>>suhu ;

    hasil=4/9*(suhu-32); cout<<"suhu dalam Reamur =" << hasil << endl;

    break;

case 5:

    cout<<"Masukan suhu dalam Kelvin :";

    cin>>suhu ;

    hasil=suhu-273,15;

    cout<<"suhu dalam Celcius =" << hasil << endl;

case 6:

    cout<<"Masukan suhu dalam Kelvin :";

    cin>>suhu ;

    hasil=(9/5*suhu)-459,67;

    cout<<"suhu dalam Fahrenheit =" << hasil << endl;

    break;

case 7:

    cout<<"masukan suhu dalam Kelvin :";

    cin>>suhu ;

    hasil=4/5*suhu-273,15; 
    cout<<"suhu dalam Reamur =" << hasil << endl;

    break;

case 8:

    cout<<"Masukan suhu dalam Celcius :";

    cin>>suhu ;

    hasil=(5/5*suhu)+273,15;

    cout<<"suhu dalam kelvin =" << hasil << endl;

case 9:

    cout<<"Masukan suhu dalam Fahrenheit :";

    cin>>suhu;

    hasil=(suhu+459,67)/1,4; 
    cout<<"suhu dalam kelvin =" << hasil << endl;

    break;

case 10:

    cout<<"masukan suhu dalam Reamur :";

    cin>>suhu;

    hasil=(5/4*suhu)+273,15; 
    cout<<"suhu dalam kelvin =" << hasil << endl;

    break;

default:

cout<<"Apa anda belum sahur?"<< endl;

break;
}

return 0;

}