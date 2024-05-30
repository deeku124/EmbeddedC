#include<stdio.h>
#include<string.h>

int *rev(int arr[],int n)
{
int i=0;
while(i<n)
{
int temp=arr[i];
arr[i]=arr[n];
arr[n]=temp;
i++;
n--;
}
return arr;
}

int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10},n,i;
for(i=0;i<10;i++)
printf("%d\n",arr[i]);
printf("no.of elements to shift\n");
scanf("%d",&n);
rev(arr,n-1);
printf("after rotating\n");
for(i=0;i<10;i++)
printf("%d\n",arr[i]);
return 0;
}
