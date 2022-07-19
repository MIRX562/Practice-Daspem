#include<iostream>
#include<string>
using namespace std;
int vokal(char c){
    switch(c){
        case 'a':
			{return 0;break;}
		case 'A':
			{return 0;break;}
		case 'i':
			{return 1;break;}
		case 'I':
			{return 1;break;}
		case 'u':
			{return 2;break;}
		case 'U':
			{return 2;break;}
		case 'e':
			{return 3;break;}
		case 'E':
			{return 3;break;}
		case 'o':
			{return 4;break;}
		case 'O':
			{return 4;break;}
		default:
			{return 5;break;}
    }
}

int main(int argc, char const *argv[]){
    string s;
    int hitung[5]={},x,n,len;
    
    cout << "Masukkan kalimat : ";
    getline(cin,s);
    len = s.length();

    for(int i=0;i<len;i++){
        int c = vokal(s[i]);
        if (c<5){
            cout << "index ke " << i <<" - "<< s[i] << endl;
            hitung[c]=hitung[c]+1;
        }
    }

    cout <<"\ntotal :\n";
    cout <<"a = "<<hitung[0]<<endl;
    cout <<"i = "<<hitung[1]<<endl;
    cout <<"u = "<<hitung[2]<<endl;
    cout <<"e = "<<hitung[3]<<endl;
    cout <<"o = "<<hitung[4]<<endl;


    cin.get();
    return 0;
}
