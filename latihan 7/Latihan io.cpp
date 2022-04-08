//library untuk bekerja dengan  file eksternal
#include<fstream>
//library untuk solusi aritmatika (kuadrat,akar,dll)
#include<cmath>
//library untuk  memanipulasi output
#include<iomanip>
//menggunakan namespace std untuk mempermudah penulisan code
using namespace std;
// program menghitung ketinggian gerak para bola
int main(int argc, char const *argv[]){
    //deklarasi variabel bisa menggunakan float/double
    double pi,o,y,g,v,t;
    //deklarasi nilai pi
    pi = 3.14;
    //deklarasi waktu 
    t=0;
    //dekalarasi kecepatan awal Vo 
    v=30;
    //deklarasi sudut elevasi
    //mengubah derajat menjadi radian untuk fungsi sin(rad)
    o=30*pi/180;
    //dekalrasi gravitasi
    g=9.8;
    //mendeklarasikan variabel output
    ofstream text;
    //membuka atau membuat file output dengan nama Hasil.txt
    text.open("Hasil.txt");
    //looping program untuk melakukan kalkulasi tinggi 
    //dan akan berhenti saat ketinggan dibawah nol
    while(y>=0){
        //fungsi gerak parabola menghitung tinggi terhadap waktu
        y = (v*sin(o)*t)-((0.5*g*pow(t,2)));
        //menulis output ke dalam Hasil.txt
        text << "t=" << t <<"\t y= " << y <<"m"<<endl;
        //menambah nilai waktu sebesar 1 (detik)
        t++;  
    }
    text.close();
    return 0;
}
