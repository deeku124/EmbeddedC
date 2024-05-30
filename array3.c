#include<stdio.h>
int main()
{
int arr[10]={1,2,3,6,5,4,7,8,10,9};
for(int i=0;i<10;i++)
{
if(arr[i]<arr[i+1])
printf("%d\n",arr[i]);
}
return 0;
}
