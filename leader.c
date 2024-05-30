#include<stdio.h>
int main()
{
int arr[]={2,4,9,6,3,5,2};
int n=sizeof(arr)/sizeof(arr[0]);
int i;
int max=arr[n-1];
printf("%d ",max);
for(i=n-2;i>=0;i--)
{
if(arr[i]>max)
{
max=arr[i];
printf("%d ",max);
}
}
return 0;
}
