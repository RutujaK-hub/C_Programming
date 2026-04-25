// Addition and Substraction Function

#include<stdio.h>

int Addition(int value1, int value2)
{
    int Ans = 0;
    Ans = value1 + value2;
    return Ans;
}
int main()
{
    int result = 0, a = 0, b=0;

    printf("Enter first number:\n");
    scanf("%d",&a);

    printf("Enter second number:\n");
    scanf("%d",&b);

    result = Addition(a,b);
    printf("Addition is:%d\n",result);
    
    return 0;
}