//Accessing Structure members indirectly using ( -> )

#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int i;      
    char ch;   
    float f;    
};              

int main()
{
    struct Demo dobj;
    struct Demo *ptr = NULL;

    ptr = &dobj;

    ptr -> i = 11;
    ptr -> ch = 'A';
    ptr -> f = 10.0f;

    printf("%d\n",ptr->i);
    printf("%c\n",ptr->ch);
    printf("%f\n",ptr->f);

    return 0 ;
} 