#include<stdio.h>

int main()
{
    //Static memory allocation
    float Marks[5];     //20 bytes

    printf("Enter your marks : \n");

    int i = 0;      
    for(int i =0; i < 5; i++)
    {
        scanf("%f",&Marks[i]);  //4
    }

    printf("Entered Marks are : \n");
    //        1     2     3
    for(int i =0; i < 5; i++)
    {
        printf("%f\n", Marks[i]);
    }
        
    return 0;
}