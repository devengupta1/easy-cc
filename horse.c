#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  for(int i=0;i<t;i++)
  {
  //  printf("***");
    int n;
    scanf("%d",&n);
     long long int arr[n];
     for(int j=0;j<n;j++)
     scanf("%lld",&arr[j]);
     long long int c;

  for(int k=0;k<n;k++)
  {
    for(int j=0;j<n;j++)
    {
    if(arr[j]>arr[j+1])
    {
      c=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=c;
  }
}
}
long long int max=arr[n-1]-arr[0];
for(int y=0;y<n-1;y++)
{
for(int x=y+1;x<n;x++)
  {
    if(arr[x]-arr[y]<max)
    max=arr[x]-arr[y];

  }


  }

  printf("%lld  \n",max);
}  return 0;
}
