//problem description
/* Suppose an array is {4,5,6,7}. Write a C program that will output like {4,5}, {4,6}, {4,7}, {5,6}, {5,7}, {6,7}. */
#include <stdio.h>


int main()
{
   int i,j;

   int arr[4]={4,5,6,7};

   for(i = 0 ; i <4; i++)
   {
       for(j = i+1 ; j<4; j++)
       {
           printf("{%d %d}, ", arr[i],arr[j]);
       }
   }

   return 0;
}
