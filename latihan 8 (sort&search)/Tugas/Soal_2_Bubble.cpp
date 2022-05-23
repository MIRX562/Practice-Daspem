#include<iostream>

using namespace std;

// void bubbleSort(int * data, int size)
// {
	
// }
int main()
{
	int list_b[] = {6,5,4,3,2,1};//bisa diubah sesuka hati isinya
	
	int len = sizeof(list_b) / sizeof(list_b[0]);
	
	
	for(int i = 0; i < len; ++i){
		cout << list_b[i]<<",";
    }
    cout << endl;
    cout << endl;
    
	for(int i = 0; i < len-1 ; ++i)
	{
		bool swaps = false;
		for(int index = 0; index < len - i - 1; ++index)
		{
			if(list_b[index] > list_b[index+1])
			{
				int temp = list_b[index];
				list_b[index] = list_b[index+1];
				list_b[index+1] = temp;
			}
			swaps = true;
		}
		if(!swaps)
			break;
	}
    // bubbleSort(list_b, len);

	for(int i = 0; i < len; ++i){
		cout << list_b[i]<<",";
    }
		
	return 0;
	
}