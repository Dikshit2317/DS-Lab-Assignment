#include<iostream>
using namespace std;
int top=-1;
int n;

void push(int stack[],int n,int x)
{
    
    if(top<n-1)
        stack[++top]=x;
}

void pop(int stack[])
{
    if(top!=-1)
    {
       top--;
       
    }
}

void isempty(int stack[])
{
    if(top==-1)
    {
        cout<<"Empty stack";
    }
}

void isfull(int stack[], int n)
{
    if(top>n-1)
    {
        cout<<"Full stack"<<endl;
    }
    else
        cout<<"Stack is not full";

}
void display(int stack[])
{
    for (int i=top; i>-1;i--)
    cout<<stack[i]<<endl;
}
void peek(int stack[])
{
    if(top>-1)
    cout<<stack[top]<<endl;
    else
    cout<<"invalid";
}
int main()
{
    int n,opt;
    int number;
    cout<<"Enter the length of stack: ";
    cin>>n;
    int S[n];
    cout<<"------MENU------"<<endl;
    cout<<"1. push()"<<endl;
    cout<<"2. pop()"<<endl;
    cout<<"3. isEmpty()"<<endl;
    cout<<"4. isFull()"<<endl;
    cout<<"5. dispay()"<<endl;
    cout<<"6. peek()"<<endl;
    cout<<"Enter the number corresponding to the operation to be performed: ";
    cin>> opt;
    switch(opt)
    {
    	case 1: cout<<"Enter the number to be pushed: ";
    	cin>> number;
    	push(S,n,number);
    	break;
    	
    	case 2:pop(S);
    	break;
    	case 3:isempty(S);
    	break;
    	case 4:isfull(S,n);
    	break;
    	case 5:display(S);
    	break;
    	case 6:peek(S);
    	break;
    
 }
    

}