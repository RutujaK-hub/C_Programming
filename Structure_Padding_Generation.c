//Creation of padding(Unused, initialized memory)

#include<stdio.h>

struct Demo
{
    int i;          //4 bytes
    char ch;        //1 byte
    float f;        //4 bytes
    //Total 9 bytes 
};
int main()
{
    struct Demo dobj;

    printf("Size of object of Structure Demo is %d\n",sizeof(dobj));

    return 0;
}