//ascending order
#include<stdio.h>
int main()
{
int array[]={4,800,12,122,19},i,j,temp;
int len=sizeof(array)/sizeof(array[0]);
for(i=0;i<len;i++)
{
for(j=i+1;j<len;j++)
{
if(array[i]>array[j])   //array[i]<array[j] descending
{
temp=array[i];
array[i]=array[j];
array[j]=temp;
}
}
}
for(i=0;i<len;i++)
{
printf("%d\n",array[i]);
}
return 0;
}

