#include<stdio.h>
int  main()
{
int arr[]={1,2,2,3,4,5,5,6,6,6};
int n=sizeof(arr)/sizeof(arr[0]);
int i,j,count;
for(i=0;i<n;i++)
{
if(arr[i])
{
count=1;
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
count++;
arr[j]=0;
}
}
printf("%d occurs %d times\n",arr[i],count);
}
}
return 0;
}
