#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    double pi,x,y;

    for(int i=1;i<=10000;i++){
        x=4*pow(i,2);
        y=(4*pow(i,2))-1;
        
        if  (y==0){
            pi = 0;
        }else{
            pi = 2*i*(x/y);
        }
        cout<<"pi = "<<pi<<endl;
    }

    return 0;
}
