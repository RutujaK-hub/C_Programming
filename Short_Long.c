//Use of Data type Modifiers (Size modification)

#include<stdio.h>
int main()
{
   int i = 11;
   short int j = 11;
   long int k =11;

   printf("Size of int : %lu\n",sizeof(i));
   printf("Size of short int :%lu\n",sizeof(j));
   printf("Size of long int :%lu\n",sizeof(k));


   return 0;
}