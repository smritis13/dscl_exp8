# dscl_exp8
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int *ptr=(int*)calloc(4,4);
    *ptr=5;
    printf ("%d %d \n",*ptr,ptr);
    ptr=ptr+1;
{
    *ptr=2;
    printf ("*%d %d", *ptr, ptr);
}
return 0;
}
<img width="369" alt="Screenshot 2023-04-07 202817" src="https://user-images.githubusercontent.com/124857385/233785346-a4c0dfb1-4db9-4f89-8b66-215ecf1ab280.png">
