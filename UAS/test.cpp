#include<bits/stdc++.h>
using namespace std;

void tampilkan(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void pengurutan(int arr[], int n)
{
    int i,j,min_in;
    for(i=0;i<n;i++)
    {
        min_in = i;
        for(j=i+1;j<n;j++)
            if (arr[j] < arr[min_in])
                min_in = j;
        swap(arr[i],arr[min_in]);
    }
}

int main(int argv, char* argc[])
{
    int arr[] = {5,4,10,1,6,2};
    int i,j,n,temp;
    n = sizeof(arr)/sizeof(int);
    cout<<"array tak terurut :";
    tampilkan(arr,n);
    pengurutan(arr,n);
    cout<<"Array terurut :";
    print(arr,n);
    return(0);
}