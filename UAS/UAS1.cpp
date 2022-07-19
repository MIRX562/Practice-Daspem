#include<iostream>
using namespace std;

void PRINTARRAY(int arr[],int m){
    cout<<"\n[";
    for(int i=0;i<m;i++){
        cout << arr[i] << ",";
    }
    cout<<"]\n\n";
}

void SWAP(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// ==================================================
void BUBBLESORT(int h[], int n){
   for (int i = 1; i < n-1; i++){
        for (int j = 1; j < n-i; j++){
            if (h[j] > h[j+1]){
                SWAP(&h[j], &h[j+1]);
            }
        }
    }
}
// ==================================================

int main(int argc, char const *argv[])
{
    int arr[]={2,6,1,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"sebelum : ";
    PRINTARRAY(arr,len);
    BUBBLESORT(arr,len);
    cout<<"sesudah :";
    PRINTARRAY(arr,len);
    cin.get();
    return 0;
}
