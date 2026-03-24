#include <stdio.h>
#include <stdlib.h>
struct student {
    int roll;
    float per;
    int k;
} ;
int main (){
struct student *x;
x = (struct student*)malloc(sizeof(struct student));
x->roll = 1245;
x->per = 78.9;
x->k = 10;
printf ("Roll = %d\n",x->roll);
printf ("percentage = %f\n",x->per);
    return 0;
}