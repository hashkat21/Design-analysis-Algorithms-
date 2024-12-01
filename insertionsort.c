//code for insertion sort
#include<stdio.h>
void sortbyinsertion(int arr[],int size);
void printarray(int arr[],int size);

int main ()
{
      int i;
      printf("Enter the number u wantto sort upto 6 :\n");
      int arr[6];
      for(i=0;i<6;i++)
      {
        scanf("%d\n",&arr[i]);
      }
      int size=sizeof(arr)/sizeof(int);
      sortbyinsertion(arr,size);
      printarray(arr,size);

    return 0;
}


void printarray(int arr[],int size)
{
        int i;
        for(i=0;i<size;i++)
        {
            printf("%d\t",arr[i]," ");
        }
}


void sortbyinsertion(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        int temp =arr[i];
        int prev=i-1;
        while(temp>=0 && arr[prev]>temp)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1] =temp;
    }
}