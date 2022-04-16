/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum(int);
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("SUM = %d", sum(N));
    
    return 0;
}

int sum(int i) {
    if (i==1) {
        return 1;
        
    }
    return sum(i-1)+i;
}