#include<stdio.h>

int main() {
    int arr[4][4] = {{5, 8, 2, 1}, {3, 6, 9, 4}, {1, 7, 2, 8}, {8, 3, 5, 7}};

 
for(int i=0;i<4;i++)
{
for(int j=0;j<3;j++)
{
for(int k=0;k<3-j;k++)
{
if(arr[i][k]>arr[i][k+1])
{
int temp=arr[i][k];
arr[i][k]=arr[i][k+1];
arr[i][k+1]=temp;
}
}
}
}
 // Print sorted array
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

