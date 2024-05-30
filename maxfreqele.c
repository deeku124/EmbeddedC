#include<stdio.h>
int main()
{
int arr[]={1,2,2,3,4,5,6,6,6,7};
int n=sizeof(arr)/sizeof(arr[0]);
int i,j,mxcnt=0,mxele=-1;
for(i=0;i<n;i++)
{
if(arr[i])
{
int count=1;
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
count++;
arr[j]=0;
}
}
printf("%d occurs %d times\n",arr[i],count);
if(count>mxcnt)
{
mxcnt=count;
mxele=arr[i];
}
}
}
 if (mxele != -1) 
        printf("%d is the most frequent element repeating %d times\n", mxele, mxcnt);
return 0;
}
