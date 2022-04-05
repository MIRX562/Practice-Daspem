#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
    int a;
cout<<"masukkan angka : ";
cin>>a;
    
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            cout<<"*";
        }
     cout<<"\n";
    }
    cin.get();
    return 0;
}
