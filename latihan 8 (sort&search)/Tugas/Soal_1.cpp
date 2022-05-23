#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void printUncommon(int arr1[], int arr2[],
                           int n1, int n2)
{
 
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
 
        // If not common, print smaller
        if (arr1[i] < arr2[j]) {
            cout << arr1[i] << ", ";
            i++;
            k++;
        }
        else if (arr2[j] < arr1[i]) {
            cout << arr2[j] << ", ";
            k++;
            j++;
        }
 
        // Skip common element
        else {
            i++;
            j++;
        }
    }
 
    // printing remaining elements
    while (i < n1) {
        cout << arr1[i] << ", ";
        i++;
        k++;
    }
    while (j < n2) {
        cout << arr2[j] << ", ";
        j++;
        k++;
    }
}
 

int main(){
    
    int ar1[] = {3,5,6,7,8,10};
    int ar2[] = {5,6,7,8};

    int len1 = sizeof(ar1) / sizeof(ar1[0]);
    int len2 = sizeof(ar2) / sizeof(ar2[0]);

    cout<<"Array1 :";
	for(int i = 0; i < len1; ++i){
		cout << ar1[i] << ",";
	}
	cout<<endl;
	cout<<endl;

    cout<<"Array2 :";
	for(int i = 0; i < len2; ++i){
		cout << ar2[i] << ",";
	}
	cout<<endl;
	cout<<endl;
    
   
    printUncommon(ar1, ar2, len1, len2);

    cin.get();
    return 0;
}
