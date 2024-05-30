#include<stdio.h>
int main()
{
int arr[3][3]={{1,2,3},{2,3,4},{3,4,5}},b[3][3];
int i,j,flag=1;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
b[j][i]=arr[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(arr[i][j]!=b[i][j])
{
flag=0;
break;
}
}
if(!flag)
break;
}
if(flag)
printf("symmetric\n");
else
printf("not symmetric\n");
return 0;
}

