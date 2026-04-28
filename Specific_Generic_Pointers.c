// Specific and Generic pointers

#include<stdio.h>

int main()
{
    char ch = 'A';      //cp can fetch 1 bytes of data
    int i = 11;         //ip can fetch 4 bytes of data
    float f = 3.14f;    //fp can fetch 4 bytes of data
    double d = 9.10;    //dp can fetch 8 bytes of data

    //Specific pointers
    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    printf("%c\n",*cp);
    printf("%d\n",*ip);
    printf("%f\n",*fp);
    printf("%lf\n",*dp);

    //Generic pointer
    void *p = NULL;     //NULL pointer

    p = &ch;
   //printf("%ch",*p);     //Error
   printf("%c\n", *(char *)p);        //Typecasting

   p = &i;
   printf("%d\n", *(int *)p);

   p = &f;
   printf("%f\n",*(float *)p);

   p = &d;
   printf("%lf\n",*(double *)p);

    return 0;


}