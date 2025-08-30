#include<iostream>
using namespace std;
int main()
{
    int i,j,G[7]= {64,34,25,12,22,11,90};
    for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
        {
            if(G[j]>G[j+1])
            {
                int temp=G[j];
                G[j]=G[j+1];
                G[j+1]=temp;
            }
        }
    }
   for(i=0;i<7;i++)
   {
     cout<<G[i]<<" ";
   }
   return 0;

}
