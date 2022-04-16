/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N, i, j;
    printf("Please enter a number: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++) {
        for(j=1;j<=N;j++) {
            if (i+j>=N+1) {
                printf("*");
            } else printf(" ");
        }
        printf("\n");
    }
    

    return 0;
}
