void swap_max(int arr[],int l,int n)
{
  int max=0;
  for(n=1;n<=l;n++)
  {
    if(arr[n]>arr[max])
    {
      max=n;
    }
  }
  return(max);
}
void ssort(int arr[],int l)
{
  int temp,big,n;
  for(n=l-1;n>=1;n--)
  {
    big=swap_max(arr,l,n);
    temp=arr[big];
    arr[big]=arr[n];
    arr[n]=temp;
  }
  return;
}
