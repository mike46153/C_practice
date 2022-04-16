/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int v[5]={1,2,3,4,5};
    int  *n;
    
    for (n=v;n!=&v[5];n++) {
        printf("%d ",*n);
    }
    return 0;
}

