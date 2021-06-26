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
