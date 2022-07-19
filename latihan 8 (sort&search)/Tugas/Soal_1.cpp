#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void missData(int arr1[], int arr2[],int n1, int n2){

    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        
        if (arr1[i] < arr2[j]) {
            cout << arr1[i] << ",";
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            cout << arr2[j] << ",";
            j++;
        }    
        else {
            i++;
            j++;
        }
    }
 
    while (i < n1) {
        cout << arr1[i] << ",";
        i++;
    }
    while (j < n2) {
        cout << arr2[j] << ",";
        j++;
    }
}
 

int main(){
    
    cout<<"\nMencari data yang hilang\n\n";

    int arr1[] = {3,5,6,7,8,10};
    int arr2[] = {5,6,7,8};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    cout<<"Array1 :[";
	for(int i = 0; i < len1; ++i){
		cout << arr1[i] << ",";
	}
	cout<<"]"<<endl;
	cout<<endl;

    cout<<"Array2 :[";
	for(int i = 0; i < len2; ++i){
		cout << arr2[i] << ",";
	}
	cout<<"]"<<endl;
	cout<<endl;
    
    cout << "elemen yang hilang adalah : [";missData(arr1, arr2, len1, len2);cout<<"]";

    cin.get();
    return 0;
}
