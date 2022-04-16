/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void sort(int *, int *);
void swap(int *, int *);

int main()
{
    int a=6,b=5;
    sort(&a,&b);
    printf("a:%d b:%d",a,b);
    

    return 0;
}

void sort(int *a, int *b) {
    if (*a>*b) {
        swap(&*a, &*b);
    }
}

void swap(int *a, int *b) {
    int t=*a;
    *a=*b;
    *b=t;
}