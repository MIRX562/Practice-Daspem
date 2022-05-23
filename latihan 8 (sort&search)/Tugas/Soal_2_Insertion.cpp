#include<iostream>
using namespace std;

// void insertionSort(int * data, int size)
// {
		
// }
int main()
{
	int data_i[] = {4,5,3,2,1};

	int len = sizeof(data_i) / sizeof(data_i[0]);

	for(int i = 0; i < len; ++i)
		cout << data_i[i] << ",";

	// insertionSort(data_i, len);
  cout<<endl;
	for(int i = 0; i < len-1 ; ++i )
	{
		for(int base = i+1 ; base != 0 ; --base)
		{
			if(data_i[base] < data_i[base-1])
			{
				int temp = data_i[base];
				data_i[base] = data_i[base-1];
				data_i[base-1] = temp;
			}
			else
				break;
		}
	}
	for(int i = 0; i < len; ++i)
		cout << data_i[i] << ",";
		
	return 0;
	
}