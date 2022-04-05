#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
       int a;
    cout<<"masukkan data : ";
    cin>>a;
    cout<<endl;
    if(a>0){
        cout<<"Bilangan positive";
    }else if(a<0) {
        cout<<"BBilangan Negative";
    }else{
        cout<<" Angka  0";
    }
    cin.get();
    return 0;
}
