//Pointer creation and other values

#include<Stdio.h>
int main()
{
    int no = 11;
    int *p = &no;

    printf("%d\n",no);          //11
    printf("%d\n",&no); 
    printf("%d\n",p);   
    printf("%d\n",*p);          //11
    printf("%d\n",sizeof(no));  //4
    printf("%d\n",sizeof(p));   //8
    printf("%d\n",sizeof(*p));  //4
    return 0 ;

}