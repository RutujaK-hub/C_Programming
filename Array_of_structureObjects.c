// Array of objects of a structure

#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

int main()
{
    struct Demo dobj[4];   
    
    printf("Size of Arr is : %lu\n",sizeof(dobj));  //32
    
    dobj[0].i = 11;
    dobj[0].f = 11.0f;
    
    dobj[1].i = 21;
    dobj[1].f = 21.0f;

    dobj[2].i = 51;
    dobj[2].f = 51.0f;

    dobj[3].i = 101;
    dobj[3].f = 101.0f;

    printf("%d\n",dobj[2].i);  //51
    printf("%f\n",dobj[2].f);  //51
    printf("%d\n",dobj[3].i);  //101
    printf("%f\n",dobj[3].f);  //101

    return 0;
}