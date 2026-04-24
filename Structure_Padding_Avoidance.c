//Avoiding padding by using pragma pack

#include<stdio.h>
#pragma pack (1)

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

    printf("Size of object of Structure Demo is %d\n",sizeof(dobj));           //9 bytes //No padding 

    return 0;
}
