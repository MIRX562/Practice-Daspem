
#include<fstream>
#include<cmath>
#include<iomanip>
#define phi 3.14

using namespace std;

int main(int argc, char const *argv[]){

    double r,y,g,v,t;

    t = 0;
    v = 30;
    r = 30*phi/180;//convert derajat ke radian
    g = 9.8;

    ofstream text;
    text.open("Result.csv");
    text << "t(waktu),y(tinggi)"<<endl;

    while(true){
        y = (v * sin(r) * t) - ((0.5 * g * pow(t,2)));
        if(y<0){
            break;
        }else{
            text << t <<"\t ," ;
            text << fixed << setprecision(2) << y << endl;
        }
        t=t+0.01;
    }

    text.close();

    return 0;
}
