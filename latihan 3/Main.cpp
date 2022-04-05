#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
   int a;
   string hari;
    cout<<"Program Hari"<<endl;
   cout<<"Masukkan Pilihan : ";
   cin>>a;

   switch (a){
   case 1:
        hari = "Minggu";
       cout<<hari<<endl;
       break;
    case 2:
        hari = "Senin";
       cout<<hari<<endl;
       break;      
   case 3:
        hari = "Selasa";
       cout<<hari<<endl;
       break;
   case 4:
        hari = "Rabu";
       cout<<hari<<endl;
       break;
   case 5:
        hari = "Kamis";
       cout<<hari<<endl;
       break;
   case 6:
        hari = "Jum'at";
       cout<<hari<<endl;
       break;
   case 7:
        hari = "Sabtu";
       cout<<hari<<endl;
       break;
  
   
   default:
       break;
   };

cout<<endl;
cout<<endl;
cout<<endl;

    int b;

   cout<<"Program ganjil genap"<<endl;
    cout<<"Masukkan Bilangan : ";
    cin>>b;
    int q=b%2;
   switch (q)
   {
   case 0:
       cout<< "bilangn genap" <<endl;
       break;
   case 1:
       cout<<"bilangn ganjil"<<endl;
       break;
   
   default:
        cout<<"unknown";
       break;
   }

cout<<endl;
cout<<endl;
cout<<endl;

    cout<<"Program pos, nol, neg"<<endl;
    int c;
    cout<<"Masukkan Bilangan ";
    cin>>c;
    switch (c>0)
    {
    case 1:
        cout<<"bilangan positif"<<endl;
        break;
        
    case 0:
        switch (c<0)
        {
        case 1:
            cout<<"bilangan negatif"<<endl;
            break;
        case 0:
            cout<<"bilangan nol"<<endl;
            break;
        
        default:
            break;
        }
        break;

    
    default:
        break;
    }



    /*if(c>0){
        d=1;
    }else if(c<0){
        d=0;
    }else{
        d=2;
    }
    switch (c>0)
    {
    case 0:
        cout<<"bilangan negatif";
        break;
    case 1:
        cout<<"bilangan positif";
        break;
    case 2:
        cout<<"bilangan nol";
        break;
    
    default:
        cout<<"unknown";
        break;
    }*/
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cin.get();
    return 0;
}
