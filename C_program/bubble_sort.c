/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int v[5], i, j;
    printf("v[5] = ");
    for (i=0;i<5;i++) {
        scanf("%d", &v[i]);
    }
    for (i=0;i<4;i++) {
        for (j=0;j<4-i;j++) {
            if (v[j]>v[j+1]) {
                int temp = v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
    for (i=0;i<5;i++) {
        printf("%d ", v[i]);
    }
    

    return 0;
}
