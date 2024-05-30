#include<stdio.h>
int main()
{
int n,p,i,j;
printf("enter array size\n");
scanf("%d",&n);
int arr[n];
printf("enter elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("enter number of posns to shift\n");
scanf("%d",&p);
for(i=0;i<p;i++)
{
int temp=arr[0];
for(j=0;j<n;j++)
{
arr[j]=arr[j+1];
}
arr[n-1]=temp;
}
printf("shifting\n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
return 0;
}
