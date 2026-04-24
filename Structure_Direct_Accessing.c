//Accessing members of structure directly using (.)

#include<stdio.h>

struct Demo
{
    int i;      
    char ch;    
    float f;    
};              

int main()
{
    struct Demo dobj;

    dobj.i = 11;
    dobj.ch = 'A';
    dobj.f = 10.0f;

    printf("%d\n",dobj.i);
    printf("%c\n",dobj.ch);
    printf("%f\n",dobj.f);

    return 0 ;
}