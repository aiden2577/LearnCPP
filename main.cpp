#include <iostream>
using namespace std;


//a simple bubble sort function
void sort(int arr[],int size)
{
	int tmp =0;
	for (int i = 0; i < size-1; i++)
	{
		/* code */
		for (int j = 0; j < size-i-1; j++)
		{
			/* code */
			if(arr[j]>arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	
	
}

int main()
{
	//阿飞新增加注释：
	int arr[]={12,4,5,23,63,23};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	return 0;
}
