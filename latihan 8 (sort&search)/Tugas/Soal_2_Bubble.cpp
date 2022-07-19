#include<iostream>
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main(){

	cout<<"\nBubble Sorting\n\n";

	int arr_b[] = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 
	84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 
	64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 
	44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 
	24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 
	2, 1};
	
	int len = sizeof(arr_b) / sizeof(arr_b[0]);
	
	cout<<"Sebelum :[";
	for(int i = 0; i < len; ++i){
		cout << arr_b[i] << ",";
	}
	cout<<"]"<<endl;
		cout<<endl;

    auto start = high_resolution_clock::now();

	for(int i = 0; i < len-1 ; ++i)
	{
		bool swaps = false;
		for(int id = 0; id < len - i - 1; ++id)
		{
			if(arr_b[id] > arr_b[id+1])
			{
				int temp = arr_b[id];
				arr_b[id] = arr_b[id+1];
				arr_b[id+1] = temp;
			}
			swaps = true;
		}
		if(!swaps)
			break;
	}
   
    auto stop = high_resolution_clock::now();

	cout << "Sesudah : [";
	for(int i = 0; i < len; ++i){
		cout << arr_b[i] << ",";
	}
	cout <<"]"<< endl;
	cout << endl;

	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Waktu eksekusi : " <<duration.count() << " microsecond " << endl;

	cin.get();
	return 0;
	
}