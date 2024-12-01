//code for selection sort
#include<stdio.h>
void sortbyselection(int arr[],int size);
void printarray(int arr[],int size);

int main ()
{
        int arr[]={5,6,37,85,35};
        int size=sizeof(arr)/sizeof(int);
        sortbyselection(arr,size);
        printarray(arr,size);

    return 0;
}

void sortbyselection(int arr[],int size)
{
       int i,j;
       for(i=0;i<size;i++)
          for(j=0;j<size-1-i;j++)
          {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
          }
}

void printarray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("\t%d",arr[i]);
    }
}