#include<iostream>
using namespace std;

// void selectionSort(int * data, int size)
// {
	
// }
int main()
{
	int list_s[] = {4,5,3,2,1};
	
	int len = sizeof(list_s) / sizeof(list_s[0]);
	
	for(int i = 0; i < len; ++i)
		cout << list_s[i] << ",";
	
    cout<<endl;
	for(int standard = 0; standard < len-1 ; ++standard)  //turn 
	{
		int lowest = standard;
		for(int index = standard+1; index < len; ++index)
		{
			if(list_s[lowest] > list_s[index])
				lowest = index;
		}
		int temp = list_s[lowest];
		list_s[lowest] = list_s[standard];
		list_s[standard] = temp;
	}
    // selectionSort(list_s, len);
	
	for(int i = 0; i < len; ++i)
		cout << list_s[i] << ",";
		
		
	return 0;
	
}