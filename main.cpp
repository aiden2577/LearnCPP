#include <iostream>
using namespace std;


//快速排序算法
void sort(int arr[],int i,int j)
{
	int val =arr[i];
	int l =i;
	int r=j;
	while(1<r)
	{
		while(1<r&&arr[r]>val)
		{
			r--;
		}
		if(l<r)
		{
			arr[l++]=arr[r];
			
		}
		while(l<r && arr[l]<=val)
		{
			l++;
		}
		if(l<r)
		{
			arr[r--]=arr[l];
		}
	}
	arr[l]=val;
	sort(arr,i,l-1);
	sort(arr,l+1,j);
}

//a simple bubble sort function
void sort(int arr[],int size)
{
	sort(arr,0,size);
}

int main()
{
	//阿飞新增加注释：
	int arr[]={12,4,5,23,63,23};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	for(int i=0;i<size;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
