/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int S(int);
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("The numbers of method: %d", S(N));

    return 0;
}


int S(int i) {
    if (i>=1 && i<=2) {
        return i;
    }
    return S(i-1)+S(i-2);
}