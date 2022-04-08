#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[]){
    int x,y;
    x=10;
    ofstream tes;
    tes.open("kuadratik.txt");
    y = pow(x,2) + (5*x) + 1;
    tes << y<<endl;
    tes.close();
    return 0;
}
