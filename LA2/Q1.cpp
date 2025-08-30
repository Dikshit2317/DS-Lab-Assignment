#include<iostream>
using namespace std;
int main()
{
	int arr[10],start,end,mid,search,status=0;
	cout<<"Enter array elements: ";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	start=0;end=9;
	cout<<"Enter search element: ";
	cin>>search;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(search==arr[mid])
		{
			cout<<"Element found";
			status=1;
			break;
		}
	   else	if(arr[mid]<search)
		{
			start=mid+1;
		}
	   else	if(arr[mid]>search)
		{
			end=mid-1;
		}
		
	}
	if(status==0)
	cout<<"Element not found";
	
}
