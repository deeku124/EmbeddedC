#include<stdio.h>
int main()
{
int n=6;
int arr[n],item,i,index;
printf("enter 5 elements\n");
for(i=0;i<5;i++)
scanf("%d",&arr[i]);
printf("enter element to insert\n");
scanf("%d",&item);
printf("enter where element to insert\n");
scanf("%d",&index);
for(i=4;i>=index;i--)
{
arr[i+1]=arr[i];
}
arr[i+1]=item;
printf("elements are\n");
for(i=0;i<6;i++)
printf("%d ",arr[i]);
}
