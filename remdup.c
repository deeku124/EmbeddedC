#include<stdio.h>
int main()
{
int arr[]={1,5,6,7,2,3,4,8,5,2};
int n=sizeof(arr)/sizeof(arr[0]);
int i,j,k=0,flag=0;
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
if(arr[i]==arr[j])
{
flag=1;
break;
}
}
if(!flag)
{
arr[k++]=arr[i];
}
}

//arr[j++]=arr[n-1];
for(i=0;i<k;i++)
printf("%d ",arr[i]);
}
