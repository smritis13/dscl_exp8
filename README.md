# dscl_exp8
Dynamic Memory Location
“calloc” or “contiguous allocation” method in C is used to dynamically allocate the specified number of blocks of memory of the specified type. it is very much similar to malloc() but has two different points and these are:
It initializes each block with a default value ‘0’.
It has two parameters or arguments as compare to malloc().
Syntax: 

ptr = (cast-type*)calloc(n, element-size);
here, n is the no. of elements and element-size is the size of each element.
For Example: 

ptr = (float*) calloc(25, sizeof(float));
This statement allocates contiguous space in memory for 25 elements each with the size of the float.
 ![image](https://user-images.githubusercontent.com/124857385/234323585-89a81dd6-e047-4d1d-bdbf-99ae6cca47ac.png)


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
