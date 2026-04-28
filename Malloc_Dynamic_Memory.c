// Dynamic Memory Allocation in C - malloc()

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;

    float *Marks = NULL;

    printf("Enter the number of students : \n");
    scanf("%d",&size);

    // Dynamic Memory Allocation

    Marks = (float *) malloc(size*sizeof(float));

    printf("Enter marks of students\n"); 
    for(int i = 0; i<size; i++)
    {
        scanf("%f",&Marks[i]);
    }

    printf("The marks of students are\n");
    for(int i = 0; i<size; i++)
    {
        printf("Student %d : %f\n",i+1,Marks[i]);
    }

    free(Marks);

    return 0;
}