// Creating a pointer in structure and its intialization

#include<stdio.h>

struct Demo
{
    int *ptr;  
};             

int main()
{
    struct Demo dobj;
    
    int no = 21;

    dobj.ptr = &no;     //Initialization

    printf("%d\n",*(dobj.ptr));

    return 0 ;
}