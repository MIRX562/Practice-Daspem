#include<iostream>
using namespace std;

class murid{
    private:
        int nim;
        string nama;
    public:
        void setNama(string n){
            nama = n;
            return nama;
        }
        void setNim(int a){
            nim = a;
            return nim;
        }          
};

int main()
{
    murid sis1;
    cout<<sis1.setNama("iffan")<<endl;
    cout<<sis1.setNim(1234567)<<endl;
    
    
    
    
    
    
    return 0;
}
