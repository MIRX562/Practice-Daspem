#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

void bubble(int arr[],int n){
    n = sizeof(arr) / sizeof(arr[0]);
    // bool swaps=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                // swaps = true;
            }
        }
        // if (swaps==false){
        //     break;
        // }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}

int main(int argc, char const *argv[])
{
    int Arr_B[]={100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 
	84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 
	64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 
	44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 
	24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 
	2, 1};

    int len = sizeof(Arr_B)/sizeof(Arr_B[0]);

    bubble(Arr_B,len);

    printArray(Arr_B,len);

    cin.get();
    return 0;
}
