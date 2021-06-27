#include<stdio.h>
void swap_max(int arr[],int l,int n)
{
  int max=n;
  int temp=0;
  for(int i=n;i<l;i++)
  {
    if(arr[i+1]>arr[max])
    {
      max=i+1;
    }
  }
  temp=arr[max];
  arr[max]=arr[n];
  arr[n]=temp;
}
void ssort(int arr[],int l)
{
  for(int i=0;i<l;i++)
  {
   swap_max(arr,l,i);
  }
  for(int i=0;i<l;i++)
  {
    printf("|%i|",arr[i]);
  }
  printf("\n");
}

