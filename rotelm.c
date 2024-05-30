#include<stdio.h>
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9,10},p,i,j;
int n=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
printf("enter the no.of posns u wanna rotate\n");
scanf("%d",&p);
for(i=0;i<p;i++)
{
int temp=arr[0];
for(j=0;j<n;j++)
{
arr[j]=arr[j+1];
}
arr[9]=temp;
}
for(i=0;i<n;i++)
printf("%d ",arr[i]);
return 0;
}
