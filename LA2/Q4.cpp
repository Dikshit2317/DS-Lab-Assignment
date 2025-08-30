//a)
#include<iostream>
using namespace std;
int main()
{
    int i,j,n1,n2;
    cout<<"Enter length of string1 :";
    cin>> n1;
    cout<<"Enter length of string2 :";
    cin>> n2;
    char arr1[n1],arr2[n2], arr3[n1+n2];
    cout<<"Enter string1 :";
    cin>> arr1;
    cout<<"Enter string2 :";
    cin>> arr2;
    for(i=0;i<n1;i++)
    {
        cout<<arr1[i];
    }
    for(j=0;j<n2;j++)
    {
        cout<<arr2[j];
    }
    return 0;
}

//b
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter length of string: ";
    cin>> n;
    char arr[n];
    cout<<"Enter string :";
    cin>> arr;
    for(i=n;i>=0;i--)
    {
        if(arr[i]!='\0')
            cout<<arr[i];
        else
            cout<<"Missing elements";
    }
    return 0;
}


//c
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter length of string: ";
    cin>> n;
    char arr[n];
    cout<<"Enter string :";
    cin>> arr;
    for(i=0;i<n;i++)
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        {
            arr[i]=arr[i+1];
        }
        else
        {
            cout<<arr[i];
        }
    }


}
    
//d
#include<iostream>
using namespace std;
void sortInAlphabeticalOrder(char arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
            char temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i];
    }
}
    cout << endl;
    int main()
    {
    char arr[10];
    cin>> arr;
    cout << "Sorting in Alphabetical Order: ";
    sortInAlphabeticalOrder(arr, n);
    return 0;
    }


//e
#include<iostream>
using namespace std;
void convertUpperToLower(char arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] >= 65 && arr[i] <= 90)
        {
            arr[i] = arr[i] + 32;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
    int main()
    {
    char arr[10];
    cin>> arr;
    cout << "Upper Case to Lower Case: ";
    convertUpperToLower(arr, n);
    return 0;
    }

