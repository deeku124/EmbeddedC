#include<stdio.h>
int main()
{
int array[10]={1,2,3,5,6,4,9,3,3,8},i,j;
for(i=0;i<9;i++)
{
for(j=i+1;j<10;j++)
{
if(array[i]==array[j])
printf("found a duplicate %d\n",array[i]);
break;
}
}
return  0;
}






























