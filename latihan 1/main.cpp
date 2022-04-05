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
    }else {
        cout<<"Bilangan Negative";
    }
    cin.get();
    return 0;
}
