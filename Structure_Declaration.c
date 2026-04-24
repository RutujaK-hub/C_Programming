#include<stdio.h>

struct Demo     //Structure declaration
{
    int a;
    int b;
    float f;
};

int main()
{
    struct Demo dobj;   //Object creation

    printf("The size of object dobj is : %d bytes ",sizeof(dobj));

    return 0;
}