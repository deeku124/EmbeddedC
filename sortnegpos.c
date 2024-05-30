#include<stdio.h>
int main()
{
int arr[]={1,-1,0,-2,2,-3,3,-4,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
int arr1[n],k=0,i,j;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j])
{
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(i=0;i<n;i++)
printf("%d ",arr[i]);
return 0;
}
