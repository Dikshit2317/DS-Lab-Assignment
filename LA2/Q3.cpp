//a)
#include<iostream>
using namespace std;
int main()
{    
    int a,i,n=6, arr[]={1,2,3,5,6};
    for (int i=0; i<n-1; i++) 
    {
        if (arr[i] != i + 1) 
        {
            a = i + 1;  
            break;
        }
        
    }
   
    cout<< "Missing number: " <<a;
    return 0;
}

//b)
#include <iostream>
using namespace std;
int findMissingBinary(int arr[], int n) 
{
    int low=0, high= n - 2;
    while (low <= high) 
    {
        int mid=(low + high)/2;
        if(arr[mid] == mid + 1) 
        {
            low= mid+1;
        } 
        else 
        {
            high= mid-1;
        }
    }
    return low + 1;
}
int main() 
{
    int n = 6;
    int arr[] = {1, 2, 3, 5, 6};
    cout << "Missing number: " << findMissingBinary(arr, n) << endl;
    return 0;
}


