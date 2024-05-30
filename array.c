#include<stdio.h>
int main()
{
int array[]={4,8,12,15,19},i,temp;
int len=sizeof(array)/sizeof(array[0]);
int max=array[0];
for(i=0;i<len;i++)
{
if(array[i]>max)
{
max=array[i];
}
}
printf("largest number is %d\n",max);
return 0;
}
