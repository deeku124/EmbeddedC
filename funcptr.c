#include<stdio.h>
int add(int a,int b){
return a+b;}
int  subtract(int a,int b){
return a-b;}
int main()
{
int (*fp)(int,int);
fp=add;
printf("sum:%d\n",fp(27,12));
fp=subtract;
printf("diff:%d\n",fp(27,12));
return 0;
}
