// Size of types of an array 

#include<Stdio.h>
int main()
{
    char cArr[4] = {'a','b','c','d'};
    int iArr[4] = {10,20,30,40};
    float fArr[4] = {10.0f,20.0f,30.0f,40.0f};
    double dArr[4] = {10.0,20.0,30.0,40.0};

    printf("Size of Character array : %lu\n",sizeof(cArr));
    printf("Size of Integer array : %lu\n",sizeof(iArr));
    printf("Size of Float array : %lu\n",sizeof(fArr));
    printf("Size of Double array : %lu\n",sizeof(dArr));

    return 0 ;

}