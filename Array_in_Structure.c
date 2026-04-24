//Creating array inside structure and its initialisation
#include<stdio.h>

struct Hello
{
    float f;        
    int Arr[3];     
};

int main()
{
    struct Hello hobj;
    
    hobj.Arr[0] =11;
    hobj.Arr[1] =21;
    hobj.Arr[2] =51;

    printf("%d\t %d\t %d\n",hobj.Arr[0],hobj.Arr[1],hobj.Arr[2]);

    return 0 ;
}
