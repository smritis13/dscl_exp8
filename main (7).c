/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

