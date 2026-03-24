#include<stdio.h>
#include<stdlib.h>
int main(){
    int *y;
   y = calloc(3,sizeof(int));   // CALLOC 
   *y = 13; 
   *(y+0)=14;
   *(y+1)=15;
   *(y+2)=16;
   printf("%d\n",*(y+2));
    y=(int*)realloc(y,5);      // REALLOC
    *(y+3)=17;
   *(y+4)=18;
   printf("%d\n",*(y+3));
   printf("%d\n",*(y+4));
   free(y);                     // FREE 
   y = NULL;
   printf("%d",*(y+3));
     printf("%d\n",*(y+4));
         return 0;
}